#pragma once

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "node.h"

namespace lctest {

struct Value {
    enum Type { NUL, BOOL, NUM, STR, ARR } type = NUL;
    bool b = false;
    double num = 0;
    std::string str;
    std::vector<Value> arr;
};

inline Value parse(const std::string &s) {
    size_t i = 0;
    std::function<Value()> parseVal = [&]() -> Value {
        while (i < s.size() && isspace((unsigned char)s[i])) i++;
        Value v;
        if (i >= s.size()) return v;
        char c = s[i];
        if (c == '[') {
            i++;
            v.type = Value::ARR;
            while (true) {
                while (i < s.size() && isspace((unsigned char)s[i])) i++;
                if (i < s.size() && s[i] == ']') { i++; break; }
                v.arr.push_back(parseVal());
                while (i < s.size() && isspace((unsigned char)s[i])) i++;
                if (i < s.size() && s[i] == ',') i++;
            }
        } else if (c == '"') {
            i++;
            v.type = Value::STR;
            while (i < s.size() && s[i] != '"') {
                if (s[i] == '\\' && i + 1 < s.size()) {
                    i++;
                    switch (s[i]) {
                        case 'n': v.str += '\n'; break;
                        case 't': v.str += '\t'; break;
                        case 'r': v.str += '\r'; break;
                        case 'b': v.str += '\b'; break;
                        case 'f': v.str += '\f'; break;
                        case 'u': {
                            unsigned code = 0;
                            for (int k = 0; k < 4 && i + 1 < s.size(); k++) {
                                char h = s[++i];
                                code *= 16;
                                if (h >= '0' && h <= '9') code += h - '0';
                                else if (h >= 'a' && h <= 'f') code += h - 'a' + 10;
                                else if (h >= 'A' && h <= 'F') code += h - 'A' + 10;
                            }
                            if (code < 0x80) {
                                v.str += (char)code;
                            } else if (code < 0x800) {
                                v.str += (char)(0xC0 | (code >> 6));
                                v.str += (char)(0x80 | (code & 0x3F));
                            } else {
                                v.str += (char)(0xE0 | (code >> 12));
                                v.str += (char)(0x80 | ((code >> 6) & 0x3F));
                                v.str += (char)(0x80 | (code & 0x3F));
                            }
                            break;
                        }
                        default: v.str += s[i];
                    }
                    i++;
                } else {
                    v.str += s[i++];
                }
            }
            if (i < s.size()) i++;
        } else if (s.compare(i, 4, "true") == 0) {
            v.type = Value::BOOL; v.b = true; i += 4;
        } else if (s.compare(i, 5, "false") == 0) {
            v.type = Value::BOOL; v.b = false; i += 5;
        } else if (s.compare(i, 4, "null") == 0) {
            v.type = Value::NUL; i += 4;
        } else {
            v.type = Value::NUM;
            size_t j = i;
            while (j < s.size() && (isdigit((unsigned char)s[j]) || s[j] == '-' || s[j] == '+' || s[j] == '.' || s[j] == 'e' || s[j] == 'E')) j++;
            v.num = strtod(s.substr(i, j - i).c_str(), nullptr);
            i = j;
        }
        return v;
    };
    return parseVal();
}

inline int toInt(const Value &v) { return (int)v.num; }
inline double toDouble(const Value &v) { return v.num; }
inline bool toBool(const Value &v) { return v.b; }
inline std::string toStr(const Value &v) { return v.str; }

inline std::vector<int> toIntVec(const Value &v) {
    std::vector<int> r;
    for (auto &e : v.arr) r.push_back(toInt(e));
    return r;
}
inline std::vector<double> toDoubleVec(const Value &v) {
    std::vector<double> r;
    for (auto &e : v.arr) r.push_back(toDouble(e));
    return r;
}
inline std::vector<std::string> toStrVec(const Value &v) {
    std::vector<std::string> r;
    for (auto &e : v.arr) r.push_back(toStr(e));
    return r;
}
inline std::vector<std::vector<int>> toIntGrid(const Value &v) {
    std::vector<std::vector<int>> r;
    for (auto &e : v.arr) r.push_back(toIntVec(e));
    return r;
}
inline std::vector<std::vector<std::string>> toStrGrid(const Value &v) {
    std::vector<std::vector<std::string>> r;
    for (auto &e : v.arr) r.push_back(toStrVec(e));
    return r;
}
inline std::vector<std::vector<char>> toCharGrid(const Value &v) {
    std::vector<std::vector<char>> r;
    for (auto &e : v.arr) {
        std::vector<char> row;
        if (e.type == Value::STR) {
            for (char c : e.str) row.push_back(c);
        } else {
            for (auto &c : e.arr) row.push_back(c.str.empty() ? '.' : c.str[0]);
        }
        r.push_back(row);
    }
    return r;
}

inline ListNode *toList(const Value &v) {
    ListNode dummy;
    ListNode *tail = &dummy;
    for (auto &e : v.arr) {
        tail->next = new ListNode(toInt(e));
        tail = tail->next;
    }
    return dummy.next;
}
inline std::vector<ListNode *> toListVec(const Value &v) {
    std::vector<ListNode *> r;
    for (auto &e : v.arr) r.push_back(toList(e));
    return r;
}

inline TreeNode *toTree(const Value &v) {
    if (v.arr.empty() || v.arr[0].type == Value::NUL) return nullptr;
    TreeNode *root = new TreeNode(toInt(v.arr[0]));
    std::vector<TreeNode *> q{root};
    size_t head = 0, i = 1;
    while (head < q.size() && i < v.arr.size()) {
        TreeNode *node = q[head++];
        if (i < v.arr.size()) {
            if (v.arr[i].type != Value::NUL) {
                node->left = new TreeNode(toInt(v.arr[i]));
                q.push_back(node->left);
            }
            i++;
        }
        if (i < v.arr.size()) {
            if (v.arr[i].type != Value::NUL) {
                node->right = new TreeNode(toInt(v.arr[i]));
                q.push_back(node->right);
            }
            i++;
        }
    }
    return root;
}

inline std::string quote(const std::string &s) {
    std::string r = "\"";
    for (char c : s) {
        if (c == '"' || c == '\\') r += '\\';
        if (c == '\n') { r += "\\n"; continue; }
        r += c;
    }
    return r + "\"";
}

inline std::string show(int x) { return std::to_string(x); }
inline std::string show(long long x) { return std::to_string(x); }
inline std::string show(unsigned int x) { return std::to_string(x); }
inline std::string show(unsigned long x) { return std::to_string(x); }
inline std::string show(double x) {
    std::ostringstream os;
    os << x;
    return os.str();
}
inline std::string show(bool x) { return x ? "true" : "false"; }
inline std::string show(const std::string &x) { return quote(x); }
inline std::string show(const char *x) { return quote(x); }

inline std::string show(ListNode *head) {
    std::string r = "[";
    int guard = 0;
    while (head && guard++ < 100000) {
        if (r.size() > 1) r += ",";
        r += std::to_string(head->val);
        head = head->next;
    }
    return r + "]";
}

inline std::string show(TreeNode *root) {
    if (!root) return "[]";
    std::vector<TreeNode *> q{root};
    std::vector<std::string> out;
    size_t head = 0;
    while (head < q.size()) {
        TreeNode *n = q[head++];
        if (!n) { out.push_back("null"); continue; }
        out.push_back(std::to_string(n->val));
        q.push_back(n->left);
        q.push_back(n->right);
    }
    while (!out.empty() && out.back() == "null") out.pop_back();
    std::string r = "[";
    for (size_t i = 0; i < out.size(); i++) {
        if (i) r += ",";
        r += out[i];
    }
    return r + "]";
}

template <class T>
inline std::string show(const std::vector<T> &v) {
    std::string r = "[";
    for (size_t i = 0; i < v.size(); i++) {
        if (i) r += ",";
        r += show(v[i]);
    }
    return r + "]";
}

inline std::string showValue(const Value &v) {
    switch (v.type) {
        case Value::NUL: return "null";
        case Value::BOOL: return v.b ? "true" : "false";
        case Value::NUM: {
            if (v.num == std::floor(v.num) && std::abs(v.num) < 1e15)
                return std::to_string((long long)v.num);
            std::ostringstream os;
            os << v.num;
            return os.str();
        }
        case Value::STR: return quote(v.str);
        case Value::ARR: {
            std::string r = "[";
            for (size_t i = 0; i < v.arr.size(); i++) {
                if (i) r += ",";
                r += showValue(v.arr[i]);
            }
            return r + "]";
        }
    }
    return "null";
}

inline bool eqValue(const Value &a, const Value &b) {
    if (a.type != b.type) return false;
    switch (a.type) {
        case Value::NUL: return true;
        case Value::BOOL: return a.b == b.b;
        case Value::NUM: return std::abs(a.num - b.num) <= 1e-5;
        case Value::STR: return a.str == b.str;
        case Value::ARR:
            if (a.arr.size() != b.arr.size()) return false;
            for (size_t i = 0; i < a.arr.size(); i++)
                if (!eqValue(a.arr[i], b.arr[i])) return false;
            return true;
    }
    return false;
}

inline void sortValue(Value &v, bool inner) {
    if (v.type != Value::ARR) return;
    if (inner)
        for (auto &e : v.arr) sortValue(e, true);
    std::sort(v.arr.begin(), v.arr.end(), [](const Value &a, const Value &b) {
        return showValue(a) < showValue(b);
    });
}

inline int report(int caseNo, bool ok, const std::string &actual, const std::string &expected) {
    if (ok) {
        std::cout << "case " << caseNo << ": PASS  " << actual << "\n";
    } else {
        std::cout << "case " << caseNo << ": FAIL\n  expected: " << expected << "\n  actual:   " << actual << "\n";
    }
    return ok ? 0 : 1;
}

template <class T>
inline int check(int caseNo, const T &actual, const std::string &expected,
                 bool unordered = false, bool innerUnordered = false) {
    std::string a = show(actual);
    Value av = parse(a), ev = parse(expected);
    if (unordered) {
        sortValue(av, innerUnordered);
        sortValue(ev, innerUnordered);
    }
    return report(caseNo, eqValue(av, ev), a, expected);
}

inline int printOnly(int caseNo, const std::string &actual, const std::string &expected) {
    std::cout << "case " << caseNo << ": MANUAL (答案不唯一或格式特殊，请人工核对)\n  expected: " << expected
              << "\n  actual:   " << actual << "\n";
    return 0;
}

inline int checkRaw(int caseNo, const std::string &actual, const std::string &expected,
                    bool unordered = false, bool innerUnordered = false) {
    Value av = parse(actual), ev = parse(expected);
    if (unordered) {
        sortValue(av, innerUnordered);
        sortValue(ev, innerUnordered);
    }
    return report(caseNo, eqValue(av, ev), actual, expected);
}

}  // namespace lctest
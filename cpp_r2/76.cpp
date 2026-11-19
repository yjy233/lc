// 76. 最小覆盖子串（困难）
// https://leetcode.cn/problems/minimum-window-substring/
//
// 给定两个字符串 s 和 t，长度分别是 m 和 n，返回 s 中的 最短窗口 子串，使得该子串包含 t 中的每一个字符（包括重复字符）。如果没有这样的子串，返回空字符串 ""。
//
// 测试用例保证答案唯一。
//
// 示例 1：
//
// 输入：s = "ADOBECODEBANC", t = "ABC"
// 输出："BANC"
// 解释：最小覆盖子串 "BANC" 包含来自字符串 t 的 'A'、'B' 和 'C'。
//
// 示例 2：
//
// 输入：s = "a", t = "a"
// 输出："a"
// 解释：整个字符串 s 是最小覆盖子串。
//
// 示例 3:
//
// 输入: s = "a", t = "aa"
// 输出: ""
// 解释: t 中两个字符 'a' 均应包含在 s 的子串中，
// 因此没有符合条件的子字符串，返回空字符串。
//
// 提示：
//
//   - m == s.length
//
//   - n == t.length
//
//   - 1 <= m, n <= 10^5
//
//   - s 和 t 由英文字母组成
//
// 进阶：你能设计一个在 O(m + n) 时间内解决此问题的算法吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "ADOBECODEBANC"
// "ABC"
// --- case 2 ---
// "a"
// "a"
// --- case 3 ---
// "a"
// "aa"

#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include "test_util.h"
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("ADOBECODEBANC")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("ABC")LC"));
        Solution sol;
        auto res = sol.minWindow(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC("BANC")LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("a")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("a")LC"));
        Solution sol;
        auto res = sol.minWindow(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC("a")LC");
    }
    // case 3
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("a")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("aa")LC"));
        Solution sol;
        auto res = sol.minWindow(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC("")LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

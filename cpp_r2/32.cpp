// 32. 最长有效括号（困难）
// https://leetcode.cn/problems/longest-valid-parentheses/
//
// 给你一个只包含 '(' 和 ')' 的字符串，找出最长有效（格式正确且连续）括号 子串 的长度。
//
// 左右括号匹配，即每个左括号都有对应的右括号将其闭合的字符串是格式正确的，比如 "(()())"。
//
// 示例 1：
//
// 输入：s = "(()"
// 输出：2
// 解释：最长有效括号子串是 "()"
//
// 示例 2：
//
// 输入：s = ")()())"
// 输出：4
// 解释：最长有效括号子串是 "()()"
//
// 示例 3：
//
// 输入：s = ""
// 输出：0
//
// 提示：
//
//   - 0 <= s.length <= 3 * 10^4
//
//   - s[i] 为 '(' 或 ')'
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "(()"
// --- case 2 ---
// ")()())"
// --- case 3 ---
// ""

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
    int longestValidParentheses(string s) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("(()")LC"));
        Solution sol;
        auto res = sol.longestValidParentheses(a0);
        fails += lctest::check(++caseNo, res, R"LC(2)LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC(")()())")LC"));
        Solution sol;
        auto res = sol.longestValidParentheses(a0);
        fails += lctest::check(++caseNo, res, R"LC(4)LC");
    }
    // case 3
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("")LC"));
        Solution sol;
        auto res = sol.longestValidParentheses(a0);
        fails += lctest::check(++caseNo, res, R"LC(0)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

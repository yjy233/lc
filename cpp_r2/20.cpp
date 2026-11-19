// 20. 有效的括号（简单）
// https://leetcode.cn/problems/valid-parentheses/
//
// 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//
// 有效字符串需满足：
//
//   - 左括号必须用相同类型的右括号闭合。
//
//   - 左括号必须以正确的顺序闭合。
//
//   - 每个右括号都有一个对应的相同类型的左括号。
//
// 示例 1：
//
// 输入：s = "()"
//
// 输出：true
//
// 示例 2：
//
// 输入：s = "()[]{}"
//
// 输出：true
//
// 示例 3：
//
// 输入：s = "(]"
//
// 输出：false
//
// 示例 4：
//
// 输入：s = "([])"
//
// 输出：true
//
// 示例 5：
//
// 输入：s = "([)]"
//
// 输出：false
//
// 提示：
//
//   - 1 <= s.length <= 10^4
//
//   - s 仅由括号 '()[]{}' 组成
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "()"
// --- case 2 ---
// "()[]{}"
// --- case 3 ---
// "(]"
// --- case 4 ---
// "([])"
// --- case 5 ---
// "([)]"

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
    bool isValid(string s) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("()")LC"));
        Solution sol;
        auto res = sol.isValid(a0);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("()[]{}")LC"));
        Solution sol;
        auto res = sol.isValid(a0);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    // case 3
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("(]")LC"));
        Solution sol;
        auto res = sol.isValid(a0);
        fails += lctest::check(++caseNo, res, R"LC(false)LC");
    }
    // case 4
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("([])")LC"));
        Solution sol;
        auto res = sol.isValid(a0);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    // case 5
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("([)]")LC"));
        Solution sol;
        auto res = sol.isValid(a0);
        fails += lctest::check(++caseNo, res, R"LC(false)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

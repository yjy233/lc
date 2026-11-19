// 65. 有效数字（困难）
// https://leetcode.cn/problems/valid-number/
//
// 给定一个字符串 s ，返回 s 是否是一个 有效数字。
//
// 例如，下面的都是有效数字："2", "0089", "-0.1", "+3.14", "4.", "-.9", "2e10", "-90E3", "3e+7", "+6e-1", "53.5e93", "-123.456e789"，而接下来的不是："abc", "1a", "1e", "e3", "99e2.5", "--6", "-+3", "95a54e53"。
//
// 一般的，一个 有效数字 可以用以下的规则之一定义：
//
//   - 一个 整数 后面跟着一个 可选指数。
//
//   - 一个 小数 后面跟着一个 可选指数。
//
// 一个 整数 定义为一个 可选符号 '-' 或 '+' 后面跟着 数字。
//
// 一个 小数 定义为一个 可选符号 '-' 或 '+' 后面跟着下述规则：
//
//   - 数字 后跟着一个 小数点 .。
//
//   - 数字 后跟着一个 小数点 . 再跟着 数位。
//
//   - 一个 小数点 . 后跟着 数位。
//
// 指数 定义为指数符号 'e' 或 'E'，后面跟着一个 整数。
//
// 数字 定义为一个或多个数位。
//
// 示例 1：
//
// 输入：s = "0"
//
// 输出：true
//
// 示例 2：
//
// 输入：s = "e"
//
// 输出：false
//
// 示例 3：
//
// 输入：s = "."
//
// 输出：false
//
// 提示：
//
//   - 1 <= s.length <= 20
//
//   - s 仅含英文字母（大写和小写），数字（0-9），加号 '+' ，减号 '-' ，或者点 '.' 。
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "0"
// --- case 2 ---
// "e"
// --- case 3 ---
// "."

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
    bool isNumber(string s) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("0")LC"));
        Solution sol;
        auto res = sol.isNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("e")LC"));
        Solution sol;
        auto res = sol.isNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(false)LC");
    }
    // case 3
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC(".")LC"));
        Solution sol;
        auto res = sol.isNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(false)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

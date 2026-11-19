// 91. 解码方法（中等）
// https://leetcode.cn/problems/decode-ways/
//
// 一条包含字母 A-Z 的消息通过以下映射进行了 编码 ：
//
// "1" -> 'A'
//
// "2" -> 'B'
//
// ...
//
// "25" -> 'Y'
//
// "26" -> 'Z'
//
// 然而，在 解码 已编码的消息时，你意识到有许多不同的方式来解码，因为有些编码被包含在其它编码当中（"2" 和 "5" 与 "25"）。
//
// 例如，"11106" 可以映射为：
//
//   - "AAJF" ，将消息分组为 (1, 1, 10, 6)
//
//   - "KJF" ，将消息分组为 (11, 10, 6)
//
//   - 消息不能分组为  (1, 11, 06) ，因为 "06" 不是一个合法编码（只有 "6" 是合法的）。
//
// 注意，可能存在无法解码的字符串。
//
// 给你一个只含数字的 非空 字符串 s ，请计算并返回 解码 方法的 总数 。如果没有合法的方式解码整个字符串，返回 0。
//
// 题目数据保证答案肯定是一个 32 位 的整数。
//
// 示例 1：
//
// 输入：s = "12"
// 输出：2
// 解释：它可以解码为 "AB"（1 2）或者 "L"（12）。
//
// 示例 2：
//
// 输入：s = "226"
// 输出：3
// 解释：它可以解码为 "BZ" (2 26), "VF" (22 6), 或者 "BBF" (2 2 6) 。
//
// 示例 3：
//
// 输入：s = "06"
// 输出：0
// 解释："06" 无法映射到 "F" ，因为存在前导零（"6" 和 "06" 并不等价）。
//
// 提示：
//
//   - 1 <= s.length <= 100
//
//   - s 只包含数字，并且可能包含前导零。
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "12"
// --- case 2 ---
// "226"
// --- case 3 ---
// "06"

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
    int numDecodings(string s) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("12")LC"));
        Solution sol;
        auto res = sol.numDecodings(a0);
        fails += lctest::check(++caseNo, res, R"LC(2)LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("226")LC"));
        Solution sol;
        auto res = sol.numDecodings(a0);
        fails += lctest::check(++caseNo, res, R"LC(3)LC");
    }
    // case 3
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("06")LC"));
        Solution sol;
        auto res = sol.numDecodings(a0);
        fails += lctest::check(++caseNo, res, R"LC(0)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

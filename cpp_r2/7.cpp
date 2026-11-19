// 7. 整数反转（中等）
// https://leetcode.cn/problems/reverse-integer/
//
// 给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。
//
// 如果反转后整数超过 32 位的有符号整数的范围 [−2^31,  2^31 − 1] ，就返回 0。
//
// 假设环境不允许存储 64 位整数（有符号或无符号）。
//
// 示例 1：
//
// 输入：x = 123
// 输出：321
//
// 示例 2：
//
// 输入：x = -123
// 输出：-321
//
// 示例 3：
//
// 输入：x = 120
// 输出：21
//
// 示例 4：
//
// 输入：x = 0
// 输出：0
//
// 提示：
//
//   - -2^31
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// 123
// --- case 2 ---
// -123
// --- case 3 ---
// 120

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
    int reverse(int x) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(123)LC"));
        Solution sol;
        auto res = sol.reverse(a0);
        fails += lctest::check(++caseNo, res, R"LC(321)LC");
    }
    // case 2
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(-123)LC"));
        Solution sol;
        auto res = sol.reverse(a0);
        fails += lctest::check(++caseNo, res, R"LC(-321)LC");
    }
    // case 3
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(120)LC"));
        Solution sol;
        auto res = sol.reverse(a0);
        fails += lctest::check(++caseNo, res, R"LC(21)LC");
    }
    // case 4
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(0)LC"));
        Solution sol;
        auto res = sol.reverse(a0);
        fails += lctest::check(++caseNo, res, R"LC(0)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

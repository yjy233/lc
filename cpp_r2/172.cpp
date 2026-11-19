// 172. 阶乘后的零（中等）
// https://leetcode.cn/problems/factorial-trailing-zeroes/
//
// 给定一个整数 n ，返回 n! 结果中尾随零的数量。
//
// 提示 n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1
//
// 示例 1：
//
// 输入：n = 3
// 输出：0
// 解释：3! = 6 ，不含尾随 0
//
// 示例 2：
//
// 输入：n = 5
// 输出：1
// 解释：5! = 120 ，有一个尾随 0
//
// 示例 3：
//
// 输入：n = 0
// 输出：0
//
// 提示：
//
//   - 0 <= n <= 10^4
//
// 进阶：你可以设计并实现对数时间复杂度的算法来解决此问题吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// 3
// --- case 2 ---
// 5
// --- case 3 ---
// 0

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
    int trailingZeroes(int n) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(3)LC"));
        Solution sol;
        auto res = sol.trailingZeroes(a0);
        fails += lctest::check(++caseNo, res, R"LC(0)LC");
    }
    // case 2
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(5)LC"));
        Solution sol;
        auto res = sol.trailingZeroes(a0);
        fails += lctest::check(++caseNo, res, R"LC(1)LC");
    }
    // case 3
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(0)LC"));
        Solution sol;
        auto res = sol.trailingZeroes(a0);
        fails += lctest::check(++caseNo, res, R"LC(0)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

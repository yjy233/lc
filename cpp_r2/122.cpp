// 122. 买卖股票的最佳时机 II（中等）
// https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-ii/
//
// 给你一个整数数组 prices ，其中 prices[i] 表示某支股票第 i 天的价格。
//
// 在每一天，你可以决定是否购买和/或出售股票。你在任何时候 最多 只能持有 一股 股票。然而，你可以在 同一天 多次买卖该股票，但要确保你持有的股票不超过一股。
//
// 返回 你能获得的 最大 利润 。
//
// 示例 1：
//
// 输入：prices = [7,1,5,3,6,4]
// 输出：7
// 解释：在第 2 天（股票价格 = 1）的时候买入，在第 3 天（股票价格 = 5）的时候卖出, 这笔交易所能获得利润 = 5 - 1 = 4。
// 随后，在第 4 天（股票价格 = 3）的时候买入，在第 5 天（股票价格 = 6）的时候卖出, 这笔交易所能获得利润 = 6 - 3 = 3。
// 最大总利润为 4 + 3 = 7 。
//
// 示例 2：
//
// 输入：prices = [1,2,3,4,5]
// 输出：4
// 解释：在第 1 天（股票价格 = 1）的时候买入，在第 5 天 （股票价格 = 5）的时候卖出, 这笔交易所能获得利润 = 5 - 1 = 4。
// 最大总利润为 4 。
//
// 示例 3：
//
// 输入：prices = [7,6,4,3,1]
// 输出：0
// 解释：在这种情况下, 交易无法获得正利润，所以不参与交易可以获得最大利润，最大利润为 0。
//
// 提示：
//
//   - 1 <= prices.length <= 3 * 10^4
//
//   - 0 <= prices[i] <= 10^4
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [7,1,5,3,6,4]
// --- case 2 ---
// [1,2,3,4,5]
// --- case 3 ---
// [7,6,4,3,1]

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
    int maxProfit(vector<int>& prices) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([7,1,5,3,6,4])LC"));
        Solution sol;
        auto res = sol.maxProfit(a0);
        fails += lctest::check(++caseNo, res, R"LC(7)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,2,3,4,5])LC"));
        Solution sol;
        auto res = sol.maxProfit(a0);
        fails += lctest::check(++caseNo, res, R"LC(4)LC");
    }
    // case 3
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([7,6,4,3,1])LC"));
        Solution sol;
        auto res = sol.maxProfit(a0);
        fails += lctest::check(++caseNo, res, R"LC(0)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

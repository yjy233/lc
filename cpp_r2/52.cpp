// 52. N 皇后 II（困难）
// https://leetcode.cn/problems/n-queens-ii/
//
// n 皇后问题 研究的是如何将 n 个皇后放置在 n × n 的棋盘上，并且使皇后彼此之间不能相互攻击。
//
// 给你一个整数 n ，返回 n 皇后问题 不同的解决方案的数量。
//
// 示例 1：
//
// 输入：n = 4
// 输出：2
// 解释：如上图所示，4 皇后问题存在两个不同的解法。
//
// 示例 2：
//
// 输入：n = 1
// 输出：1
//
// 提示：
//
//   - 1 <= n <= 9
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// 4
// --- case 2 ---
// 1

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
    int totalNQueens(int n) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(4)LC"));
        Solution sol;
        auto res = sol.totalNQueens(a0);
        fails += lctest::check(++caseNo, res, R"LC(2)LC");
    }
    // case 2
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.totalNQueens(a0);
        fails += lctest::check(++caseNo, res, R"LC(1)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

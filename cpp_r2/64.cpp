// 64. 最小路径和（中等）
// https://leetcode.cn/problems/minimum-path-sum/
//
// 给定一个包含非负整数的 m x n 网格 grid ，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。
//
// 说明：每次只能向下或者向右移动一步。
//
// 示例 1：
//
// 输入：grid = [[1,3,1],[1,5,1],[4,2,1]]
// 输出：7
// 解释：因为路径 1→3→1→1→1 的总和最小。
//
// 示例 2：
//
// 输入：grid = [[1,2,3],[4,5,6]]
// 输出：12
//
// 提示：
//
//   - m == grid.length
//
//   - n == grid[i].length
//
//   - 1 <= m, n <= 200
//
//   - 0 <= grid[i][j] <= 200
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [[1,3,1],[1,5,1],[4,2,1]]
// --- case 2 ---
// [[1,2,3],[4,5,6]]

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
    int minPathSum(vector<vector<int>>& grid) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[1,3,1],[1,5,1],[4,2,1]])LC"));
        Solution sol;
        auto res = sol.minPathSum(a0);
        fails += lctest::check(++caseNo, res, R"LC(7)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[1,2,3],[4,5,6]])LC"));
        Solution sol;
        auto res = sol.minPathSum(a0);
        fails += lctest::check(++caseNo, res, R"LC(12)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

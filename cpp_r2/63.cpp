// 63. 不同路径 II（中等）
// https://leetcode.cn/problems/unique-paths-ii/
//
// 给定一个 m x n 的整数数组 grid。一个机器人初始位于 左上角（即 grid[0][0]）。机器人尝试移动到 右下角（即 grid[m - 1][n - 1]）。机器人每次只能向下或者向右移动一步。
//
// 网格中的障碍物和空位置分别用 1 和 0 来表示。机器人的移动路径中不能包含 任何 有障碍物的方格。
//
// 返回机器人能够到达右下角的不同路径数量。
//
// 测试用例保证答案小于等于 2 * 10^9。
//
// 示例 1：
//
// 输入：obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
// 输出：2
// 解释：3x3 网格的正中间有一个障碍物。
// 从左上角到右下角一共有 2 条不同的路径：
// 1. 向右 -> 向右 -> 向下 -> 向下
// 2. 向下 -> 向下 -> 向右 -> 向右
//
// 示例 2：
//
// 输入：obstacleGrid = [[0,1],[0,0]]
// 输出：1
//
// 提示：
//
//   - m == obstacleGrid.length
//
//   - n == obstacleGrid[i].length
//
//   - 1 <= m, n <= 100
//
//   - obstacleGrid[i][j] 为 0 或 1
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [[0,0,0],[0,1,0],[0,0,0]]
// --- case 2 ---
// [[0,1],[0,0]]

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
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[0,0,0],[0,1,0],[0,0,0]])LC"));
        Solution sol;
        auto res = sol.uniquePathsWithObstacles(a0);
        fails += lctest::check(++caseNo, res, R"LC(2)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[0,1],[0,0]])LC"));
        Solution sol;
        auto res = sol.uniquePathsWithObstacles(a0);
        fails += lctest::check(++caseNo, res, R"LC(1)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

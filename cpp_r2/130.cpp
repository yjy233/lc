// 130. 被围绕的区域（中等）
// https://leetcode.cn/problems/surrounded-regions/
//
// 给你一个 m x n 的矩阵 board ，由若干字符 'X' 和 'O' 组成，捕获 所有 被围绕的区域：
//
//   - 连接：一个单元格与水平或垂直方向上相邻的单元格连接。
//
//   - 区域：连接所有 'O' 的单元格来形成一个区域。
//
//   - 围绕：如果一个区域中的所有 'O' 单元格都不在棋盘的边缘，则该区域被包围。这样的区域 完全 被 'X' 单元格包围。
//
// 通过 原地 将输入矩阵中的所有 'O' 替换为 'X' 来 捕获被围绕的区域。你不需要返回任何值。
//
// 示例 1：
//
// 输入：board = [['X','X','X','X'],['X','O','O','X'],['X','X','O','X'],['X','O','X','X']]
//
// 输出：[['X','X','X','X'],['X','X','X','X'],['X','X','X','X'],['X','O','X','X']]
//
// 解释：
//
// 在上图中，底部的区域没有被捕获，因为它在 board 的边缘并且不能被围绕。
//
// 示例 2：
//
// 输入：board = [['X']]
//
// 输出：[['X']]
//
// 提示：
//
//   - m == board.length
//
//   - n == board[i].length
//
//   - 1 <= m, n <= 200
//
//   - board[i][j] 为 'X' 或 'O'
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]
// --- case 2 ---
// [["X"]]

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
using namespace std;

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

// 73. 矩阵置零（中等）
// https://leetcode.cn/problems/set-matrix-zeroes/
//
// 给定一个 m x n 的矩阵，如果一个元素为 0 ，则将其所在行和列的所有元素都设为 0 。请使用 原地 算法。
//
// 示例 1：
//
// 输入：matrix = [[1,1,1],[1,0,1],[1,1,1]]
// 输出：[[1,0,1],[0,0,0],[1,0,1]]
//
// 示例 2：
//
// 输入：matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// 输出：[[0,0,0,0],[0,4,5,0],[0,3,1,0]]
//
// 提示：
//
//   - m == matrix.length
//
//   - n == matrix[0].length
//
//   - 1 <= m, n <= 200
//
//   - -2^31 <= matrix[i][j] <= 2^31 - 1
//
// 进阶：
//
//   - 一个直观的解决方案是使用  O(mn) 的额外空间，但这并不是一个好的解决方案。
//
//   - 一个简单的改进方案是使用 O(m + n) 的额外空间，但这仍然不是最好的解决方案。
//
//   - 你能想出一个仅使用常量空间的解决方案吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [[1,1,1],[1,0,1],[1,1,1]]
// --- case 2 ---
// [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

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
    void setZeroes(vector<vector<int>>& matrix) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

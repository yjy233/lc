// 74. 搜索二维矩阵（中等）
// https://leetcode.cn/problems/search-a-2d-matrix/
//
// 给你一个满足下述两条属性的 m x n 整数矩阵：
//
//   - 每行中的整数从左到右按非严格递增顺序排列。
//
//   - 每行的第一个整数大于前一行的最后一个整数。
//
// 给你一个整数 target ，如果 target 在矩阵中，返回 true ；否则，返回 false 。
//
// 你必须编写一个时间复杂度为 O(log(m * n)) 的解决方案。
//
// 示例 1：
//
// 输入：matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// 输出：true
//
// 示例 2：
//
// 输入：matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// 输出：false
//
// 提示：
//
//   - m == matrix.length
//
//   - n == matrix[i].length
//
//   - 1 <= m, n <= 100
//
//   - -10^4 <= matrix[i][j], target <= 10^4
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
// 3
// --- case 2 ---
// [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
// 13

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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

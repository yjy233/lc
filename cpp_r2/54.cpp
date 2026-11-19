// 54. 螺旋矩阵（中等）
// https://leetcode.cn/problems/spiral-matrix/
//
// 给你一个 m 行 n 列的矩阵 matrix ，请按照 顺时针螺旋顺序 ，返回矩阵中的所有元素。
//
// 示例 1：
//
// 输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
// 输出：[1,2,3,6,9,8,7,4,5]
//
// 示例 2：
//
// 输入：matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// 输出：[1,2,3,4,8,12,11,10,9,5,6,7]
//
// 提示：
//
//   - m == matrix.length
//
//   - n == matrix[i].length
//
//   - 1
//
//   - -100
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [[1,2,3],[4,5,6],[7,8,9]]
// --- case 2 ---
// [[1,2,3,4],[5,6,7,8],[9,10,11,12]]

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
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[1,2,3],[4,5,6],[7,8,9]])LC"));
        Solution sol;
        auto res = sol.spiralOrder(a0);
        fails += lctest::check(++caseNo, res, R"LC([1,2,3,6,9,8,7,4,5])LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[1,2,3,4],[5,6,7,8],[9,10,11,12]])LC"));
        Solution sol;
        auto res = sol.spiralOrder(a0);
        fails += lctest::check(++caseNo, res, R"LC([1,2,3,4,8,12,11,10,9,5,6,7])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

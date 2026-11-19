// 84. 柱状图中最大的矩形（困难）
// https://leetcode.cn/problems/largest-rectangle-in-histogram/
//
// 给定 n 个非负整数，用来表示柱状图中各个柱子的高度。每个柱子彼此相邻，且宽度为 1 。
//
// 求在该柱状图中，能够勾勒出来的矩形的最大面积。
//
// 示例 1:
//
// 输入：heights = [2,1,5,6,2,3]
// 输出：10
// 解释：最大的矩形为图中红色区域，面积为 10
//
// 示例 2：
//
// 输入： heights = [2,4]
// 输出： 4
//
// 提示：
//
//   - 1
//
//   - 0
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [2,1,5,6,2,3]
// --- case 2 ---
// [2,4]

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
    int largestRectangleArea(vector<int>& heights) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,1,5,6,2,3])LC"));
        Solution sol;
        auto res = sol.largestRectangleArea(a0);
        fails += lctest::check(++caseNo, res, R"LC(10)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,4])LC"));
        Solution sol;
        auto res = sol.largestRectangleArea(a0);
        fails += lctest::check(++caseNo, res, R"LC(4)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

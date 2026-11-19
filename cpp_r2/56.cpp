// 56. 合并区间（中等）
// https://leetcode.cn/problems/merge-intervals/
//
// 以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [start_i, end_i] 。请你合并所有重叠的区间，并返回 一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间 。
//
// 示例 1：
//
// 输入：intervals = [[1,3],[2,6],[8,10],[15,18]]
// 输出：[[1,6],[8,10],[15,18]]
// 解释：区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
//
// 示例 2：
//
// 输入：intervals = [[1,4],[4,5]]
// 输出：[[1,5]]
// 解释：区间 [1,4] 和 [4,5] 可被视为重叠区间。
//
// 示例 3：
//
// 输入：intervals = [[4,7],[1,4]]
// 输出：[[1,7]]
// 解释：区间 [1,4] 和 [4,7] 可被视为重叠区间。
//
// 提示：
//
//   - 1 <= intervals.length <= 10^4
//
//   - intervals[i].length == 2
//
//   - 0 <= start_i <= end_i <= 10^4
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [[1,3],[2,6],[8,10],[15,18]]
// --- case 2 ---
// [[1,4],[4,5]]
// --- case 3 ---
// [[4,7],[1,4]]

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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[1,3],[2,6],[8,10],[15,18]])LC"));
        Solution sol;
        auto res = sol.merge(a0);
        fails += lctest::check(++caseNo, res, R"LC([[1,6],[8,10],[15,18]])LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[1,4],[4,5]])LC"));
        Solution sol;
        auto res = sol.merge(a0);
        fails += lctest::check(++caseNo, res, R"LC([[1,5]])LC");
    }
    // case 3
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[4,7],[1,4]])LC"));
        Solution sol;
        auto res = sol.merge(a0);
        fails += lctest::check(++caseNo, res, R"LC([[1,7]])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

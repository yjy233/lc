// 57. 插入区间（中等）
// https://leetcode.cn/problems/insert-interval/
//
// 给你一个 无重叠的 ，按照区间起始端点排序的区间列表 intervals，其中 intervals[i] = [start_i, end_i] 表示第 i 个区间的开始和结束，并且 intervals 按照 start_i 升序排列。同样给定一个区间 newInterval = [start, end] 表示另一个区间的开始和结束。
//
// 如果两个区间 至少 共享一个点，则认为它们是重叠的。
//
// 在 intervals 中插入区间 newInterval，使得 intervals 依然按照 start_i 升序排列，且区间之间不重叠（如果有必要的话，可以合并区间）。
//
// 返回插入之后的 intervals。
//
// 注意 你不需要原地修改 intervals。你可以创建一个新数组然后返回它。
//
// 示例 1：
//
// 输入：intervals = [[1,3],[6,9]], newInterval = [2,5]
// 输出：[[1,5],[6,9]]
//
// 示例 2：
//
// 输入：intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
// 输出：[[1,2],[3,10],[12,16]]
// 解释：这是因为新的区间 [4,8] 与 [3,5],[6,7],[8,10] 重叠。
//
// 提示：
//
//   - 0 <= intervals.length <= 10^4
//
//   - intervals[i].length == 2
//
//   - 0 <= start_i <= end_i <= 10^5
//
//   - intervals 根据 start_i 按 升序 排列
//
//   - newInterval.length == 2
//
//   - 0 <= start <= end <= 10^5
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [[1,3],[6,9]]
// [2,5]
// --- case 2 ---
// [[1,2],[3,5],[6,7],[8,10],[12,16]]
// [4,8]

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
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[1,3],[6,9]])LC"));
        auto a1 = lctest::toIntVec(lctest::parse(R"LC([2,5])LC"));
        Solution sol;
        auto res = sol.insert(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([[1,5],[6,9]])LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[1,2],[3,5],[6,7],[8,10],[12,16]])LC"));
        auto a1 = lctest::toIntVec(lctest::parse(R"LC([4,8])LC"));
        Solution sol;
        auto res = sol.insert(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([[1,2],[3,10],[12,16]])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

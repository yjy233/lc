// 40. 组合总和 II（中等）
// https://leetcode.cn/problems/combination-sum-ii/
//
// 给定一个候选人编号的集合 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。
//
// candidates 中的每个数字在每个组合中只能使用 一次 。
//
// 注意：解集不能包含重复的组合。
//
// 示例 1:
//
// 输入: candidates = [10,1,2,7,6,1,5], target = 8,
// 输出:
// [
// [1,1,6],
// [1,2,5],
// [1,7],
// [2,6]
// ]
//
// 示例 2:
//
// 输入: candidates = [2,5,2,1,2], target = 5,
// 输出:
// [
// [1,2,2],
// [5]
// ]
//
// 提示:
//
//   - 1 <= candidates.length <= 100
//
//   - 1 <= candidates[i] <= 50
//
//   - 1 <= target <= 30
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [10,1,2,7,6,1,5]
// 8
// --- case 2 ---
// [2,5,2,1,2]
// 5

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
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([10,1,2,7,6,1,5])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(8)LC"));
        Solution sol;
        auto res = sol.combinationSum2(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([[1,1,6],[1,2,5],[1,7],[2,6]])LC", true);
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,5,2,1,2])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(5)LC"));
        Solution sol;
        auto res = sol.combinationSum2(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([[1,2,2],[5]])LC", true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

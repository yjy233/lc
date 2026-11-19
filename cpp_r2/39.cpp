// 39. 组合总和（中等）
// https://leetcode.cn/problems/combination-sum/
//
// 给你一个 无重复元素 的整数数组 candidates 和一个目标整数 target ，找出 candidates 中可以使数字和为目标数 target 的 所有 不同组合 ，并以列表形式返回。你可以按 任意顺序 返回这些组合。
//
// candidates 中的 同一个 数字可以 无限制重复被选取 。如果至少一个数字的被选数量不同，则两种组合是不同的。
//
// 对于给定的输入，保证和为 target 的不同组合数少于 150 个。
//
// 示例 1：
//
// 输入：candidates = [2,3,6,7], target = 7
// 输出：[[2,2,3],[7]]
// 解释：
// 2 和 3 可以形成一组候选，2 + 2 + 3 = 7 。注意 2 可以使用多次。
// 7 也是一个候选， 7 = 7 。
// 仅有这两种组合。
//
// 示例 2：
//
// 输入: candidates = [2,3,5], target = 8
// 输出: [[2,2,2,2],[2,3,3],[3,5]]
//
// 示例 3：
//
// 输入: candidates = [2], target = 1
// 输出: []
//
// 提示：
//
//   - 1 <= candidates.length <= 30
//
//   - 2 <= candidates[i] <= 40
//
//   - candidates 的所有元素 互不相同
//
//   - 1 <= target <= 40
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [2,3,6,7]
// 7
// --- case 2 ---
// [2,3,5]
// 8
// --- case 3 ---
// [2]
// 1

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
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,3,6,7])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(7)LC"));
        Solution sol;
        auto res = sol.combinationSum(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([[2,2,3],[7]])LC", true);
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,3,5])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(8)LC"));
        Solution sol;
        auto res = sol.combinationSum(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([[2,2,2,2],[2,3,3],[3,5]])LC", true);
    }
    // case 3
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.combinationSum(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([])LC", true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

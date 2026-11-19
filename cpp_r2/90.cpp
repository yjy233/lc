// 90. 子集 II（中等）
// https://leetcode.cn/problems/subsets-ii/
//
// 给你一个整数数组 nums ，其中可能包含重复元素，请你返回该数组所有可能的 子集（幂集）。
//
// 解集 不能 包含重复的子集。返回的解集中，子集可以按 任意顺序 排列。
//
// 示例 1：
//
// 输入：nums = [1,2,2]
// 输出：[[],[1],[1,2],[1,2,2],[2],[2,2]]
//
// 示例 2：
//
// 输入：nums = [0]
// 输出：[[],[0]]
//
// 提示：
//
//   - 1 <= nums.length <= 10
//
//   - -10 <= nums[i] <= 10
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,2]
// --- case 2 ---
// [0]

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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,2,2])LC"));
        Solution sol;
        auto res = sol.subsetsWithDup(a0);
        fails += lctest::check(++caseNo, res, R"LC([[],[1],[1,2],[1,2,2],[2],[2,2]])LC", true);
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([0])LC"));
        Solution sol;
        auto res = sol.subsetsWithDup(a0);
        fails += lctest::check(++caseNo, res, R"LC([[],[0]])LC", true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

// 46. 全排列（中等）
// https://leetcode.cn/problems/permutations/
//
// 给定一个不含重复数字的数组 nums ，返回其 所有可能的全排列 。你可以 按任意顺序 返回答案。
//
// 示例 1：
//
// 输入：nums = [1,2,3]
// 输出：[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
//
// 示例 2：
//
// 输入：nums = [0,1]
// 输出：[[0,1],[1,0]]
//
// 示例 3：
//
// 输入：nums = [1]
// 输出：[[1]]
//
// 提示：
//
//   - 1 <= nums.length <= 6
//
//   - -10 <= nums[i] <= 10
//
//   - nums 中的所有整数 互不相同
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,3]
// --- case 2 ---
// [0,1]
// --- case 3 ---
// [1]

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
    vector<vector<int>> permute(vector<int>& nums) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,2,3])LC"));
        Solution sol;
        auto res = sol.permute(a0);
        fails += lctest::check(++caseNo, res, R"LC([[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]])LC", true);
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([0,1])LC"));
        Solution sol;
        auto res = sol.permute(a0);
        fails += lctest::check(++caseNo, res, R"LC([[0,1],[1,0]])LC", true);
    }
    // case 3
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1])LC"));
        Solution sol;
        auto res = sol.permute(a0);
        fails += lctest::check(++caseNo, res, R"LC([[1]])LC", true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

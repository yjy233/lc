// 18. 四数之和（中等）
// https://leetcode.cn/problems/4sum/
//
// 给你一个由 n 个整数组成的数组 nums ，和一个目标值 target 。请你找出并返回满足下述全部条件且不重复的四元组 [nums[a], nums[b], nums[c], nums[d]] （若两个四元组元素一一对应，则认为两个四元组重复）：
//
//   - 0 <= a, b, c, d < n
//
//   - a、b、c 和 d 互不相同
//
//   - nums[a] + nums[b] + nums[c] + nums[d] == target
//
// 你可以按 任意顺序 返回答案 。
//
// 示例 1：
//
// 输入：nums = [1,0,-1,0,-2,2], target = 0
// 输出：[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
//
// 示例 2：
//
// 输入：nums = [2,2,2,2,2], target = 8
// 输出：[[2,2,2,2]]
//
// 提示：
//
//   - 1 <= nums.length <= 200
//
//   - -10^9 <= nums[i] <= 10^9
//
//   - -10^9 <= target <= 10^9
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,0,-1,0,-2,2]
// 0
// --- case 2 ---
// [2,2,2,2,2]
// 8

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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,0,-1,0,-2,2])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(0)LC"));
        Solution sol;
        auto res = sol.fourSum(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]])LC", true);
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,2,2,2,2])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(8)LC"));
        Solution sol;
        auto res = sol.fourSum(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([[2,2,2,2]])LC", true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

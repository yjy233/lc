// 34. 在排序数组中查找元素的第一个和最后一个位置（中等）
// https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/
//
// 给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。
//
// 如果数组中不存在目标值 target，返回 [-1, -1]。
//
// 你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题。
//
// 示例 1：
//
// 输入：nums = [5,7,7,8,8,10], target = 8
// 输出：[3,4]
//
// 示例 2：
//
// 输入：nums = [5,7,7,8,8,10], target = 6
// 输出：[-1,-1]
//
// 示例 3：
//
// 输入：nums = [], target = 0
// 输出：[-1,-1]
//
// 提示：
//
//   - 0 <= nums.length <= 10^5
//
//   - -10^9 <= nums[i] <= 10^9
//
//   - nums 是一个非递减数组
//
//   - -10^9 <= target <= 10^9
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [5,7,7,8,8,10]
// 8
// --- case 2 ---
// [5,7,7,8,8,10]
// 6
// --- case 3 ---
// []
// 0

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
    vector<int> searchRange(vector<int>& nums, int target) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([5,7,7,8,8,10])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(8)LC"));
        Solution sol;
        auto res = sol.searchRange(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([3,4])LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([5,7,7,8,8,10])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(6)LC"));
        Solution sol;
        auto res = sol.searchRange(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([-1,-1])LC");
    }
    // case 3
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(0)LC"));
        Solution sol;
        auto res = sol.searchRange(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([-1,-1])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

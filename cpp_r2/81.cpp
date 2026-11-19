// 81. 搜索旋转排序数组 II（中等）
// https://leetcode.cn/problems/search-in-rotated-sorted-array-ii/
//
// 已知存在一个按非降序排列的整数数组 nums ，数组中的值不必互不相同。
//
// 在传递给函数之前，nums 在预先未知的某个下标 k（0 <= k < nums.length）上进行了 旋转 ，使数组变为 [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]（下标 从 0 开始 计数）。例如， [0,1,2,4,4,4,5,6,6,7] 在下标 5 处经旋转后可能变为 [4,5,6,6,7,0,1,2,4,4] 。
//
// 给你 旋转后 的数组 nums 和一个整数 target ，请你编写一个函数来判断给定的目标值是否存在于数组中。如果 nums 中存在这个目标值 target ，则返回 true ，否则返回 false 。
//
// 你必须尽可能减少整个操作步骤。
//
// 示例 1：
//
// 输入：nums = [2,5,6,0,0,1,2], target = 0
// 输出：true
//
// 示例 2：
//
// 输入：nums = [2,5,6,0,0,1,2], target = 3
// 输出：false
//
// 提示：
//
//   - 1 <= nums.length <= 5000
//
//   - -10^4 <= nums[i] <= 10^4
//
//   - 题目数据保证 nums 在预先未知的某个下标上进行了旋转
//
//   - -10^4 <= target <= 10^4
//
// 进阶：
//
//   - 此题与 搜索旋转排序数组 相似，但本题中的 nums  可能包含 重复 元素。这会影响到程序的时间复杂度吗？会有怎样的影响，为什么？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [2,5,6,0,0,1,2]
// 0
// --- case 2 ---
// [2,5,6,0,0,1,2]
// 3

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
    bool search(vector<int>& nums, int target) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,5,6,0,0,1,2])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(0)LC"));
        Solution sol;
        auto res = sol.search(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,5,6,0,0,1,2])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(3)LC"));
        Solution sol;
        auto res = sol.search(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(false)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

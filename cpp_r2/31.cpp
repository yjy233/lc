// 31. 下一个排列（中等）
// https://leetcode.cn/problems/next-permutation/
//
// 整数数组的一个 排列  就是将其所有成员以序列或线性顺序排列。
//
//   - 例如，arr = [1, 2, 3] ，以下这些都可以视作 arr 的排列：[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1] 。
//
// 整数数组的 下一个排列 是指其整数的下一个字典序更大的排列。更正式地，如果数组的所有排列根据其字典顺序从小到大排列在一个容器中，那么数组的 下一个排列 就是在这个有序容器中排在它后面的那个排列。如果不存在下一个更大的排列，那么这个数组必须重排为字典序最小的排列（即，其元素按升序排列）。
//
//   - arr = [1, 2, 3] 的下一个排列是 [1, 3, 2] 。
//
//   - arr = [2, 3, 1] 的下一个排列是 [3, 1, 2] 。
//
//   - arr = [3, 2, 1] 的下一个排列是 [1, 2, 3] ，因为 [3, 2, 1] 不存在一个字典序更大的排列。
//
// 给你一个整数数组 nums ，找出 nums 的下一个排列。
//
// 必须 原地 修改，只允许使用额外常数空间。
//
// 示例 1：
//
// 输入：nums = [1,2,3]
// 输出：[1,3,2]
//
// 示例 2：
//
// 输入：nums = [3,2,1]
// 输出：[1,2,3]
//
// 示例 3：
//
// 输入：nums = [1,1,5]
// 输出：[1,5,1]
//
// 提示：
//
//   - 1 <= nums.length <= 100
//
//   - 0 <= nums[i] <= 100
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,3]
// --- case 2 ---
// [3,2,1]
// --- case 3 ---
// [1,1,5]

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
    void nextPermutation(vector<int>& nums) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,2,3])LC"));
        Solution sol;
        sol.nextPermutation(a0);
        fails += lctest::check(++caseNo, a0, R"LC([1,3,2])LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([3,2,1])LC"));
        Solution sol;
        sol.nextPermutation(a0);
        fails += lctest::check(++caseNo, a0, R"LC([1,2,3])LC");
    }
    // case 3
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,1,5])LC"));
        Solution sol;
        sol.nextPermutation(a0);
        fails += lctest::check(++caseNo, a0, R"LC([1,5,1])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

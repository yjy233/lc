// 189. 轮转数组（中等）
// https://leetcode.cn/problems/rotate-array/
//
// 给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
//
// 示例 1:
//
// 输入: nums = [1,2,3,4,5,6,7], k = 3
// 输出: [5,6,7,1,2,3,4]
// 解释:
// 向右轮转 1 步: [7,1,2,3,4,5,6]
// 向右轮转 2 步: [6,7,1,2,3,4,5]
// 向右轮转 3 步: [5,6,7,1,2,3,4]
//
// 示例 2:
//
// 输入：nums = [-1,-100,3,99], k = 2
// 输出：[3,99,-1,-100]
// 解释:
// 向右轮转 1 步: [99,-1,-100,3]
// 向右轮转 2 步: [3,99,-1,-100]
//
// 提示：
//
//   - 1 <= nums.length <= 10^5
//
//   - -2^31 <= nums[i] <= 2^31 - 1
//
//   - 0 <= k <= 10^5
//
// 进阶：
//
//   - 尽可能想出更多的解决方案，至少有 三种 不同的方法可以解决这个问题。
//
//   - 你可以使用空间复杂度为 O(1) 的 原地 算法解决这个问题吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,3,4,5,6,7]
// 3
// --- case 2 ---
// [-1,-100,3,99]
// 2

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
    void rotate(vector<int>& nums, int k) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,2,3,4,5,6,7])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(3)LC"));
        Solution sol;
        sol.rotate(a0, a1);
        fails += lctest::check(++caseNo, a0, R"LC([5,6,7,1,2,3,4])LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([-1,-100,3,99])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(2)LC"));
        Solution sol;
        sol.rotate(a0, a1);
        fails += lctest::check(++caseNo, a0, R"LC([3,99,-1,-100])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

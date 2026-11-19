// 128. 最长连续序列（中等）
// https://leetcode.cn/problems/longest-consecutive-sequence/
//
// 给定一个未排序的整数数组 nums ，找出数字连续的最长序列（不要求序列元素在原数组中连续）的长度。
//
// 请你设计并实现时间复杂度为 O(n) 的算法解决此问题。
//
// 示例 1：
//
// 输入：nums = [100,4,200,1,3,2]
// 输出：4
// 解释：最长数字连续序列是 [1, 2, 3, 4]。它的长度为 4。
//
// 示例 2：
//
// 输入：nums = [0,3,7,2,5,8,4,6,0,1]
// 输出：9
//
// 示例 3：
//
// 输入：nums = [1,0,1,2]
// 输出：3
//
// 提示：
//
//   - 0 <= nums.length <= 10^5
//
//   - -10^9 <= nums[i] <= 10^9
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [100,4,200,1,3,2]
// --- case 2 ---
// [0,3,7,2,5,8,4,6,0,1]
// --- case 3 ---
// [1,0,1,2]

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
    int longestConsecutive(vector<int>& nums) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([100,4,200,1,3,2])LC"));
        Solution sol;
        auto res = sol.longestConsecutive(a0);
        fails += lctest::check(++caseNo, res, R"LC(4)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([0,3,7,2,5,8,4,6,0,1])LC"));
        Solution sol;
        auto res = sol.longestConsecutive(a0);
        fails += lctest::check(++caseNo, res, R"LC(9)LC");
    }
    // case 3
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,0,1,2])LC"));
        Solution sol;
        auto res = sol.longestConsecutive(a0);
        fails += lctest::check(++caseNo, res, R"LC(3)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

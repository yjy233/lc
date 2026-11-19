// 4. 寻找两个正序数组的中位数（困难）
// https://leetcode.cn/problems/median-of-two-sorted-arrays/
//
// 给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。请你找出并返回这两个正序数组的 中位数 。
//
// 算法的时间复杂度应该为 O(log (m+n)) 。
//
// 示例 1：
//
// 输入：nums1 = [1,3], nums2 = [2]
// 输出：2.00000
// 解释：合并数组 = [1,2,3] ，中位数 2
//
// 示例 2：
//
// 输入：nums1 = [1,2], nums2 = [3,4]
// 输出：2.50000
// 解释：合并数组 = [1,2,3,4] ，中位数 (2 + 3) / 2 = 2.5
//
// 提示：
//
//   - nums1.length == m
//
//   - nums2.length == n
//
//   - 0 <= m <= 1000
//
//   - 0 <= n <= 1000
//
//   - 1 <= m + n <= 2000
//
//   - -10^6 <= nums1[i], nums2[i] <= 10^6
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,3]
// [2]
// --- case 2 ---
// [1,2]
// [3,4]

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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,3])LC"));
        auto a1 = lctest::toIntVec(lctest::parse(R"LC([2])LC"));
        Solution sol;
        auto res = sol.findMedianSortedArrays(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(2.00000)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,2])LC"));
        auto a1 = lctest::toIntVec(lctest::parse(R"LC([3,4])LC"));
        Solution sol;
        auto res = sol.findMedianSortedArrays(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(2.50000)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

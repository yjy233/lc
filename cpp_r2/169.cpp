// 169. 多数元素（简单）
// https://leetcode.cn/problems/majority-element/
//
// 给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
//
// 你可以假设数组是非空的，并且给定的数组总是存在多数元素。
//
// 示例 1：
//
// 输入：nums = [3,2,3]
// 输出：3
//
// 示例 2：
//
// 输入：nums = [2,2,1,1,1,2,2]
// 输出：2
//
// 提示：
//
//   - n == nums.length
//
//   - 1 <= n <= 5 * 10^4
//
//   - -10^9 <= nums[i] <= 10^9
//
//   - 输入保证数组中一定有一个多数元素。
//
// 进阶：尝试设计时间复杂度为 O(n)、空间复杂度为 O(1) 的算法解决此问题。
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [3,2,3]
// --- case 2 ---
// [2,2,1,1,1,2,2]

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
    int majorityElement(vector<int>& nums) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([3,2,3])LC"));
        Solution sol;
        auto res = sol.majorityElement(a0);
        fails += lctest::check(++caseNo, res, R"LC(3)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,2,1,1,1,2,2])LC"));
        Solution sol;
        auto res = sol.majorityElement(a0);
        fails += lctest::check(++caseNo, res, R"LC(2)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

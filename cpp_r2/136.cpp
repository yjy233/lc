// 136. 只出现一次的数字（简单）
// https://leetcode.cn/problems/single-number/
//
// 给你一个 非空 整数数组 nums ，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
//
// 你必须设计并实现线性时间复杂度的算法来解决此问题，且该算法只使用常量额外空间。
//
// 示例 1 ：
//
// 输入：nums = [2,2,1]
//
// 输出：1
//
// 示例 2 ：
//
// 输入：nums = [4,1,2,1,2]
//
// 输出：4
//
// 示例 3 ：
//
// 输入：nums = [1]
//
// 输出：1
//
// 提示：
//
//   - 1 <= nums.length <= 3 * 10^4
//
//   - -3 * 10^4 <= nums[i] <= 3 * 10^4
//
//   - 除了某个元素只出现一次以外，其余每个元素均出现两次。
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [2,2,1]
// --- case 2 ---
// [4,1,2,1,2]
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
    int singleNumber(vector<int>& nums) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,2,1])LC"));
        Solution sol;
        auto res = sol.singleNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(1)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([4,1,2,1,2])LC"));
        Solution sol;
        auto res = sol.singleNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(4)LC");
    }
    // case 3
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1])LC"));
        Solution sol;
        auto res = sol.singleNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(1)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

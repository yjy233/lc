// 137. 只出现一次的数字 II（中等）
// https://leetcode.cn/problems/single-number-ii/
//
// 给你一个整数数组 nums ，除某个元素仅出现 一次 外，其余每个元素都恰出现 三次 。请你找出并返回那个只出现了一次的元素。
//
// 你必须设计并实现线性时间复杂度的算法且使用常数级空间来解决此问题。
//
// 示例 1：
//
// 输入：nums = [2,2,3,2]
// 输出：3
//
// 示例 2：
//
// 输入：nums = [0,1,0,1,0,1,99]
// 输出：99
//
// 提示：
//
//   - 1 <= nums.length <= 3 * 10^4
//
//   - -2^31 <= nums[i] <= 2^31 - 1
//
//   - nums 中，除某个元素仅出现 一次 外，其余每个元素都恰出现 三次
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [2,2,3,2]
// --- case 2 ---
// [0,1,0,1,0,1,99]

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
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([2,2,3,2])LC"));
        Solution sol;
        auto res = sol.singleNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(3)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([0,1,0,1,0,1,99])LC"));
        Solution sol;
        auto res = sol.singleNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(99)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

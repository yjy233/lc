// 26. 删除有序数组中的重复项（简单）
// https://leetcode.cn/problems/remove-duplicates-from-sorted-array/
//
// 给你一个 非严格递增排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。
//
// 考虑 nums 的唯一元素的数量为 k。去重后，返回唯一元素的数量 k。
//
// nums 的前 k 个元素应包含 排序后 的唯一数字。下标 k - 1 之后的剩余元素可以忽略。
//
// 判题标准:
//
// 系统会用下面的代码来测试你的题解:
//
// int[] nums = [...]; // 输入数组
// int[] expectedNums = [...]; // 长度正确的期望答案
//
// int k = removeDuplicates(nums); // 调用
//
// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }
//
// 如果所有断言都通过，那么您的题解将被 通过。
//
// 示例 1：
//
// 输入：nums = [1,1,2]
// 输出：2, nums = [1,2,_]
// 解释：函数应该返回新的长度 2 ，并且原数组 nums 的前两个元素被修改为 1, 2 。不需要考虑数组中超出新长度后面的元素。
//
// 示例 2：
//
// 输入：nums = [0,0,1,1,1,2,2,3,3,4]
// 输出：5, nums = [0,1,2,3,4,_,_,_,_,_]
// 解释：函数应该返回新的长度 5 ， 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4 。不需要考虑数组中超出新长度后面的元素。
//
// 提示：
//
//   - 1 <= nums.length <= 3 * 10^4
//
//   - -100 <= nums[i] <= 100
//
//   - nums 已按 非递减 顺序排列。
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,1,2]
// --- case 2 ---
// [0,0,1,1,1,2,2,3,3,4]

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
    int removeDuplicates(vector<int>& nums) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([1,1,2])LC"));
        Solution sol;
        auto res = sol.removeDuplicates(a0);
        fails += lctest::printOnly(++caseNo, lctest::show(res), R"LC(2, nums = [1,2,_])LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([0,0,1,1,1,2,2,3,3,4])LC"));
        Solution sol;
        auto res = sol.removeDuplicates(a0);
        fails += lctest::printOnly(++caseNo, lctest::show(res), R"LC(5, nums = [0,1,2,3,4,_,_,_,_,_])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

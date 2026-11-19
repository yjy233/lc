// 167. 两数之和 II - 输入有序数组（中等）
// https://leetcode.cn/problems/two-sum-ii-input-array-is-sorted/
//
// 给你一个下标从 1 开始的整数数组 numbers ，该数组已按 非递减顺序排列。
//
// 请你从数组中找出满足相加之和等于目标数 target 的 两个 数。令这两个数分别是 numbers[index_1] 和 numbers[index_2] ，其中 1 <= index_1 < index_2 <= numbers.length 。
//
// 以长度为 2 的整数数组 [index_1, index_2] 的形式返回这两个整数的下标 index_1 和 index_2。
//
// 你可以假设每个输入 只对应唯一的答案 ，而且你 不可以 重复使用相同的元素。
//
// 你所设计的解决方案必须只使用常数级的额外空间。
//
// 示例 1：
//
// 输入：numbers = [2,7,11,15], target = 9
// 输出：[1,2]
// 解释：2 与 7 之和等于目标数 9 。因此 index_1 = 1, index_2 = 2 。返回 [1, 2] 。
//
// 示例 2：
//
// 输入：numbers = [2,3,4], target = 6
// 输出：[1,3]
// 解释：2 与 4 之和等于目标数 6 。因此 index_1 = 1, index_2 = 3 。返回 [1, 3] 。
//
// 示例 3：
//
// 输入：numbers = [-1,0], target = -1
// 输出：[1,2]
// 解释：-1 与 0 之和等于目标数 -1 。因此 index_1 = 1, index_2 = 2 。返回 [1, 2] 。
//
// 提示：
//
//   - 2 <= numbers.length <= 3 * 10^4
//
//   - -1000 <= numbers[i] <= 1000
//
//   - numbers 按 非递减顺序 排列
//
//   - -1000 <= target <= 1000
//
//   - 仅存在一个有效答案
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [2,7,11,15]
// 9
// --- case 2 ---
// [2,3,4]
// 6
// --- case 3 ---
// [-1,0]
// -1

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
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

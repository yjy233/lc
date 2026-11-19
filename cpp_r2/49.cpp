// 49. 字母异位词分组（中等）
// https://leetcode.cn/problems/group-anagrams/
//
// 给你一个字符串数组，请你将 字母异位词 组合在一起。可以按任意顺序返回结果列表。
//
// 示例 1:
//
// 输入: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
//
// 输出: [["bat"],["nat","tan"],["ate","eat","tea"]]
//
// 解释：
//
//   - 在 strs 中没有字符串可以通过重新排列来形成 "bat"。
//
//   - 字符串 "nat" 和 "tan" 是字母异位词，因为它们可以重新排列以形成彼此。
//
//   - 字符串 "ate" ，"eat" 和 "tea" 是字母异位词，因为它们可以重新排列以形成彼此。
//
// 示例 2:
//
// 输入: strs = [""]
//
// 输出: [[""]]
//
// 示例 3:
//
// 输入: strs = ["a"]
//
// 输出: [["a"]]
//
// 提示：
//
//   - 1 <= strs.length <= 10^4
//
//   - 0 <= strs[i].length <= 100
//
//   - strs[i] 仅包含小写字母
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// ["eat","tea","tan","ate","nat","bat"]
// --- case 2 ---
// [""]
// --- case 3 ---
// ["a"]

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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

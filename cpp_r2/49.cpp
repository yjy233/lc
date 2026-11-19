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
#include "test_util.h"
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStrVec(lctest::parse(R"LC(["eat", "tea", "tan", "ate", "nat", "bat"])LC"));
        Solution sol;
        auto res = sol.groupAnagrams(a0);
        fails += lctest::check(++caseNo, res, R"LC([["bat"],["nat","tan"],["ate","eat","tea"]])LC", true, true);
    }
    // case 2
    {
        auto a0 = lctest::toStrVec(lctest::parse(R"LC([""])LC"));
        Solution sol;
        auto res = sol.groupAnagrams(a0);
        fails += lctest::check(++caseNo, res, R"LC([[""]])LC", true, true);
    }
    // case 3
    {
        auto a0 = lctest::toStrVec(lctest::parse(R"LC(["a"])LC"));
        Solution sol;
        auto res = sol.groupAnagrams(a0);
        fails += lctest::check(++caseNo, res, R"LC([["a"]])LC", true, true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

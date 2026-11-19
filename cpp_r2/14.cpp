// 14. 最长公共前缀（简单）
// https://leetcode.cn/problems/longest-common-prefix/
//
// 编写一个函数来查找字符串数组中的最长公共前缀。
//
// 如果不存在公共前缀，返回空字符串 ""。
//
// 示例 1：
//
// 输入：strs = ["flower","flow","flight"]
// 输出："fl"
//
// 示例 2：
//
// 输入：strs = ["dog","racecar","car"]
// 输出：""
// 解释：输入不存在公共前缀。
//
// 提示：
//
//   - 1 <= strs.length <= 200
//
//   - 0 <= strs[i].length <= 200
//
//   - strs[i] 如果非空，则仅由小写英文字母组成
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// ["flower","flow","flight"]
// --- case 2 ---
// ["dog","racecar","car"]

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
    string longestCommonPrefix(vector<string>& strs) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStrVec(lctest::parse(R"LC(["flower","flow","flight"])LC"));
        Solution sol;
        auto res = sol.longestCommonPrefix(a0);
        fails += lctest::check(++caseNo, res, R"LC("fl")LC");
    }
    // case 2
    {
        auto a0 = lctest::toStrVec(lctest::parse(R"LC(["dog","racecar","car"])LC"));
        Solution sol;
        auto res = sol.longestCommonPrefix(a0);
        fails += lctest::check(++caseNo, res, R"LC("")LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

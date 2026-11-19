// 5. 最长回文子串（中等）
// https://leetcode.cn/problems/longest-palindromic-substring/
//
// 给你一个字符串 s，找到 s 中最长的 回文 子串。
//
// 示例 1：
//
// 输入：s = "babad"
// 输出："bab"
// 解释："aba" 同样是符合题意的答案。
//
// 示例 2：
//
// 输入：s = "cbbd"
// 输出："bb"
//
// 提示：
//
//   - 1 <= s.length <= 1000
//
//   - s 仅由数字和英文字母组成
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "babad"
// --- case 2 ---
// "cbbd"

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
    string longestPalindrome(string s) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("babad")LC"));
        Solution sol;
        auto res = sol.longestPalindrome(a0);
        fails += lctest::printOnly(++caseNo, lctest::show(res), R"LC("bab")LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("cbbd")LC"));
        Solution sol;
        auto res = sol.longestPalindrome(a0);
        fails += lctest::printOnly(++caseNo, lctest::show(res), R"LC("bb")LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

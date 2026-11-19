// 28. 找出字符串中第一个匹配项的下标（简单）
// https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/
//
// 给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串的第一个匹配项的下标（下标从 0 开始）。如果 needle 不是 haystack 的一部分，则返回  -1 。
//
// 示例 1：
//
// 输入：haystack = "sadbutsad", needle = "sad"
// 输出：0
// 解释："sad" 在下标 0 和 6 处匹配。
// 第一个匹配项的下标是 0 ，所以返回 0 。
//
// 示例 2：
//
// 输入：haystack = "leetcode", needle = "leeto"
// 输出：-1
// 解释："leeto" 没有在 "leetcode" 中出现，所以返回 -1 。
//
// 提示：
//
//   - 1 <= haystack.length, needle.length <= 10^4
//
//   - haystack 和 needle 仅由小写英文字符组成
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "sadbutsad"
// "sad"
// --- case 2 ---
// "leetcode"
// "leeto"

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
    int strStr(string haystack, string needle) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("sadbutsad")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("sad")LC"));
        Solution sol;
        auto res = sol.strStr(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(0)LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("leetcode")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("leeto")LC"));
        Solution sol;
        auto res = sol.strStr(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(-1)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

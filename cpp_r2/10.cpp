// 10. 正则表达式匹配（困难）
// https://leetcode.cn/problems/regular-expression-matching/
//
// 给你一个字符串 s 和一个字符规律 p，请你来实现一个支持 '.' 和 '*' 的正则表达式匹配。
//
//   - '.' 匹配任意单个字符
//
//   - '*' 匹配零个或多个前面的那一个元素
//
// 返回一个布尔值，表示匹配是否覆盖整个输入字符串（而非部分）。
//
// 示例 1：
//
// 输入：s = "aa", p = "a"
// 输出：false
// 解释："a" 无法匹配 "aa" 整个字符串。
//
// 示例 2:
//
// 输入：s = "aa", p = "a*"
// 输出：true
// 解释：因为 '*' 代表可以匹配零个或多个前面的那一个元素, 在这里前面的元素就是 'a'。因此，字符串 "aa" 可被视为 'a' 重复了一次。
//
// 示例 3：
//
// 输入：s = "ab", p = ".*"
// 输出：true
// 解释：".*" 表示可匹配零个或多个（'*'）任意字符（'.'）。
//
// 提示：
//
//   - 1 <= s.length <= 20
//
//   - 1 <= p.length <= 20
//
//   - s 只包含从 a-z 的小写字母。
//
//   - p 只包含从 a-z 的小写字母，以及字符 . 和 *。
//
//   - 保证每次出现字符 * 时，前面都匹配到有效的字符
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "aa"
// "a"
// --- case 2 ---
// "aa"
// "a*"
// --- case 3 ---
// "ab"
// ".*"

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
    bool isMatch(string s, string p) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("aa")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("a")LC"));
        Solution sol;
        auto res = sol.isMatch(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(false)LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("aa")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("a*")LC"));
        Solution sol;
        auto res = sol.isMatch(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    // case 3
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("ab")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC(".*")LC"));
        Solution sol;
        auto res = sol.isMatch(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

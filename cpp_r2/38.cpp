// 38. 外观数列（中等）
// https://leetcode.cn/problems/count-and-say/
//
// 「外观数列」是一个数位字符串序列，由递归公式定义：
//
//   - countAndSay(1) = "1"
//
//   - countAndSay(n) 是 countAndSay(n-1) 的行程长度编码。
//
// 行程长度编码（RLE）是一种字符串压缩方法，其工作原理是通过将每个最大连续相同字符组替换为该组的长度后加上该字符本身。例如，要压缩字符串 "3322251" ，我们将 "33" 用 "23" 替换，将 "222" 用 "32" 替换，将 "5" 用 "15" 替换并将 "1" 用 "11" 替换。因此压缩后字符串变为 "23321511"。
//
// 给定一个整数 n ，返回 外观数列 的第 n 个元素。
//
// 示例 1：
//
// 输入：n = 4
//
// 输出："1211"
//
// 解释：
//
// countAndSay(1) = "1"
//
// countAndSay(2) = "1" 的行程长度编码 = "11"
//
// countAndSay(3) = "11" 的行程长度编码 = "21"
//
// countAndSay(4) = "21" 的行程长度编码 = "1211"
//
// 示例 2：
//
// 输入：n = 1
//
// 输出："1"
//
// 解释：
//
// 这是基本情况。
//
// 提示：
//
//   - 1 <= n <= 30
//
// 进阶：你能迭代解决该问题吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// 1
// --- case 2 ---
// 4

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
    string countAndSay(int n) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(4)LC"));
        Solution sol;
        auto res = sol.countAndSay(a0);
        fails += lctest::check(++caseNo, res, R"LC("1211")LC");
    }
    // case 2
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.countAndSay(a0);
        fails += lctest::check(++caseNo, res, R"LC("1")LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

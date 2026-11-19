// 67. 二进制求和（简单）
// https://leetcode.cn/problems/add-binary/
//
// 给你两个二进制字符串 a 和 b ，以二进制字符串的形式返回它们的和。
//
// 示例 1：
//
// 输入:a = "11", b = "1"
// 输出："100"
//
// 示例 2：
//
// 输入：a = "1010", b = "1011"
// 输出："10101"
//
// 提示：
//
//   - 1 <= a.length, b.length <= 10^4
//
//   - a 和 b 仅由字符 '0' 或 '1' 组成
//
//   - 字符串如果不是 "0" ，就不含前导零
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "11"
// "1"
// --- case 2 ---
// "1010"
// "1011"

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
    string addBinary(string a, string b) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("11")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("1")LC"));
        Solution sol;
        auto res = sol.addBinary(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC("100")LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("1010")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("1011")LC"));
        Solution sol;
        auto res = sol.addBinary(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC("10101")LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

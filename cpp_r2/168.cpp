// 168. Excel 表列名称（简单）
// https://leetcode.cn/problems/excel-sheet-column-title/
//
// 给你一个整数 columnNumber ，返回它在 Excel 表中相对应的列名称。
//
// 例如：
//
// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28
// ...
//
// 示例 1：
//
// 输入：columnNumber = 1
// 输出："A"
//
// 示例 2：
//
// 输入：columnNumber = 28
// 输出："AB"
//
// 示例 3：
//
// 输入：columnNumber = 701
// 输出："ZY"
//
// 示例 4：
//
// 输入：columnNumber = 2147483647
// 输出："FXSHRXW"
//
// 提示：
//
//   - 1
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// 1
// --- case 2 ---
// 28
// --- case 3 ---
// 701

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
    string convertToTitle(int columnNumber) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.convertToTitle(a0);
        fails += lctest::check(++caseNo, res, R"LC("A")LC");
    }
    // case 2
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(28)LC"));
        Solution sol;
        auto res = sol.convertToTitle(a0);
        fails += lctest::check(++caseNo, res, R"LC("AB")LC");
    }
    // case 3
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(701)LC"));
        Solution sol;
        auto res = sol.convertToTitle(a0);
        fails += lctest::check(++caseNo, res, R"LC("ZY")LC");
    }
    // case 4
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(2147483647)LC"));
        Solution sol;
        auto res = sol.convertToTitle(a0);
        fails += lctest::check(++caseNo, res, R"LC("FXSHRXW")LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

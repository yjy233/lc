// 171. Excel 表列序号（简单）
// https://leetcode.cn/problems/excel-sheet-column-number/
//
// 给你一个字符串 columnTitle ，表示 Excel 表格中的列名称。返回 该列名称对应的列序号 。
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
// 示例 1:
//
// 输入: columnTitle = "A"
// 输出: 1
//
// 示例 2:
//
// 输入: columnTitle = "AB"
// 输出: 28
//
// 示例 3:
//
// 输入: columnTitle = "ZY"
// 输出: 701
//
// 提示：
//
//   - 1 <= columnTitle.length <= 7
//
//   - columnTitle 仅由大写英文组成
//
//   - columnTitle 在范围 ["A", "FXSHRXW"] 内
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "A"
// --- case 2 ---
// "AB"
// --- case 3 ---
// "ZY"

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
    int titleToNumber(string columnTitle) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("A")LC"));
        Solution sol;
        auto res = sol.titleToNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(1)LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("AB")LC"));
        Solution sol;
        auto res = sol.titleToNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(28)LC");
    }
    // case 3
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("ZY")LC"));
        Solution sol;
        auto res = sol.titleToNumber(a0);
        fails += lctest::check(++caseNo, res, R"LC(701)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

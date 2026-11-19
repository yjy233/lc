// 6. Z 字形变换（中等）
// https://leetcode.cn/problems/zigzag-conversion/
//
// 将一个给定字符串 s 根据给定的行数 numRows ，以从上往下、从左到右进行 Z 字形排列。
//
// 比如输入字符串为 "PAYPALISHIRING" 行数为 3 时，排列如下：
//
// P   A   H   N
// A P L S I I G
// Y   I   R
//
// 之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："PAHNAPLSIIGYIR"。
//
// 请你实现这个将字符串进行指定行数变换的函数：
//
// string convert(string s, int numRows);
//
// 示例 1：
//
// 输入：s = "PAYPALISHIRING", numRows = 3
// 输出："PAHNAPLSIIGYIR"
//
// 示例 2：
//
// 输入：s = "PAYPALISHIRING", numRows = 4
// 输出："PINALSIGYAHRPI"
// 解释：
// P     I    N
// A   L S  I G
// Y A   H R
// P     I
//
// 示例 3：
//
// 输入：s = "A", numRows = 1
// 输出："A"
//
// 提示：
//
//   - 1
//
//   - s 由英文字母（小写和大写）、',' 和 '.' 组成
//
//   - 1
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "PAYPALISHIRING"
// 3
// --- case 2 ---
// "PAYPALISHIRING"
// 4
// --- case 3 ---
// "A"
// 1

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
    string convert(string s, int numRows) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("PAYPALISHIRING")LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(3)LC"));
        Solution sol;
        auto res = sol.convert(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC("PAHNAPLSIIGYIR")LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("PAYPALISHIRING")LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(4)LC"));
        Solution sol;
        auto res = sol.convert(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC("PINALSIGYAHRPI")LC");
    }
    // case 3
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("A")LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.convert(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC("A")LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

// 118. 杨辉三角（简单）
// https://leetcode.cn/problems/pascals-triangle/
//
// 给定一个非负整数 numRows。
//
// 返回「杨辉三角」的前 numRows 行。
//
// 在「杨辉三角」中，每个数是它左上方和右上方的数的和。
//
// 示例 1:
//
// 输入: numRows = 5
// 输出: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
//
// 示例 2:
//
// 输入: numRows = 1
// 输出: [[1]]
//
// 提示:
//
//   - 1 <= numRows <= 30
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// 5
// --- case 2 ---
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
    vector<vector<int>> generate(int numRows) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(5)LC"));
        Solution sol;
        auto res = sol.generate(a0);
        fails += lctest::check(++caseNo, res, R"LC([[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]])LC");
    }
    // case 2
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.generate(a0);
        fails += lctest::check(++caseNo, res, R"LC([[1]])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

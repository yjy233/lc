// 62. 不同路径（中等）
// https://leetcode.cn/problems/unique-paths/
//
// 一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为 “Start” ）。
//
// 机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish” ）。
//
// 问总共有多少条不同的路径？
//
// 示例 1：
//
// 输入：m = 3, n = 7
// 输出：28
//
// 示例 2：
//
// 输入：m = 3, n = 2
// 输出：3
// 解释：
// 从左上角开始，总共有 3 条路径可以到达右下角。
// 1. 向右 -> 向下 -> 向下
// 2. 向下 -> 向下 -> 向右
// 3. 向下 -> 向右 -> 向下
//
// 示例 3：
//
// 输入：m = 7, n = 3
// 输出：28
//
// 示例 4：
//
// 输入：m = 3, n = 3
// 输出：6
//
// 提示：
//
//   - 1 <= m, n <= 100
//
//   - 题目数据保证答案小于等于 2 * 10^9
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// 3
// 7
// --- case 2 ---
// 3
// 2

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
    int uniquePaths(int m, int n) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(3)LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(7)LC"));
        Solution sol;
        auto res = sol.uniquePaths(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(28)LC");
    }
    // case 2
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(3)LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(2)LC"));
        Solution sol;
        auto res = sol.uniquePaths(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(3)LC");
    }
    // case 3
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(7)LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(3)LC"));
        Solution sol;
        auto res = sol.uniquePaths(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(28)LC");
    }
    // case 4
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(3)LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(3)LC"));
        Solution sol;
        auto res = sol.uniquePaths(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(6)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

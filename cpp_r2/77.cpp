// 77. 组合（中等）
// https://leetcode.cn/problems/combinations/
//
// 给定两个整数 n 和 k，返回范围 [1, n] 中所有可能的 k 个数的组合。
//
// 你可以按 任何顺序 返回答案。
//
// 示例 1：
//
// 输入：n = 4, k = 2
// 输出：
// [
//   [2,4],
//   [3,4],
//   [2,3],
//   [1,2],
//   [1,3],
//   [1,4],
// ]
//
// 示例 2：
//
// 输入：n = 1, k = 1
// 输出：[[1]]
//
// 提示：
//
//   - 1
//
//   - 1
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// 4
// 2
// --- case 2 ---
// 1
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
    vector<vector<int>> combine(int n, int k) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(4)LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(2)LC"));
        Solution sol;
        auto res = sol.combine(a0, a1);
        fails += lctest::printOnly(++caseNo, lctest::show(res), R"LC([  [2,4],  [3,4],  [2,3],  [1,2],  [1,3],  [1,4],])LC");
    }
    // case 2
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.combine(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([[1]])LC", true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

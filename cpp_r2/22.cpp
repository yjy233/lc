// 22. 括号生成（中等）
// https://leetcode.cn/problems/generate-parentheses/
//
// 数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。
//
// 示例 1：
//
// 输入：n = 3
// 输出：["((()))","(()())","(())()","()(())","()()()"]
//
// 示例 2：
//
// 输入：n = 1
// 输出：["()"]
//
// 提示：
//
//   - 1 <= n <= 8
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// 3
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
    vector<string> generateParenthesis(int n) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(3)LC"));
        Solution sol;
        auto res = sol.generateParenthesis(a0);
        fails += lctest::check(++caseNo, res, R"LC(["((()))","(()())","(())()","()(())","()()()"])LC", true);
    }
    // case 2
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.generateParenthesis(a0);
        fails += lctest::check(++caseNo, res, R"LC(["()"])LC", true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

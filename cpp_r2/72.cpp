// 72. 编辑距离（中等）
// https://leetcode.cn/problems/edit-distance/
//
// 给你两个单词 word1 和 word2， 请返回将 word1 转换成 word2 所使用的最少操作数  。
//
// 你可以对一个单词进行如下三种操作：
//
//   - 插入一个字符
//
//   - 删除一个字符
//
//   - 替换一个字符
//
// 示例 1：
//
// 输入：word1 = "horse", word2 = "ros"
// 输出：3
// 解释：
// horse -> rorse (将 'h' 替换为 'r')
// rorse -> rose (删除 'r')
// rose -> ros (删除 'e')
//
// 示例 2：
//
// 输入：word1 = "intention", word2 = "execution"
// 输出：5
// 解释：
// intention -> inention (删除 't')
// inention -> enention (将 'i' 替换为 'e')
// enention -> exention (将 'n' 替换为 'x')
// exention -> exection (将 'n' 替换为 'c')
// exection -> execution (插入 'u')
//
// 提示：
//
//   - 0 <= word1.length, word2.length <= 500
//
//   - word1 和 word2 由小写英文字母组成
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "horse"
// "ros"
// --- case 2 ---
// "intention"
// "execution"

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
    int minDistance(string word1, string word2) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("horse")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("ros")LC"));
        Solution sol;
        auto res = sol.minDistance(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(3)LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("intention")LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("execution")LC"));
        Solution sol;
        auto res = sol.minDistance(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(5)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

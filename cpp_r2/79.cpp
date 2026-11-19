// 79. 单词搜索（中等）
// https://leetcode.cn/problems/word-search/
//
// 给定一个 m x n 二维字符网格 board 和一个字符串单词 word 。如果 word 存在于网格中，返回 true ；否则，返回 false 。
//
// 单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。
//
// 示例 1：
//
// 输入：board = [['A','B','C','E'],['S','F','C','S'],['A','D','E','E']], word = "ABCCED"
// 输出：true
//
// 示例 2：
//
// 输入：board = [['A','B','C','E'],['S','F','C','S'],['A','D','E','E']], word = "SEE"
// 输出：true
//
// 示例 3：
//
// 输入：board = [['A','B','C','E'],['S','F','C','S'],['A','D','E','E']], word = "ABCB"
// 输出：false
//
// 提示：
//
//   - m == board.length
//
//   - n = board[i].length
//
//   - 1 <= m, n <= 6
//
//   - 1 <= word.length <= 15
//
//   - board 和 word 仅由大小写英文字母组成
//
// 进阶：你可以使用搜索剪枝的技术来优化解决方案，使其在 board 更大的情况下可以更快解决问题？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
// "ABCCED"
// --- case 2 ---
// [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
// "SEE"
// --- case 3 ---
// [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
// "ABCB"

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
    bool exist(vector<vector<char>>& board, string word) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toCharGrid(lctest::parse(R"LC([["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]])LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("ABCCED")LC"));
        Solution sol;
        auto res = sol.exist(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    // case 2
    {
        auto a0 = lctest::toCharGrid(lctest::parse(R"LC([["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]])LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("SEE")LC"));
        Solution sol;
        auto res = sol.exist(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    // case 3
    {
        auto a0 = lctest::toCharGrid(lctest::parse(R"LC([["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]])LC"));
        auto a1 = lctest::toStr(lctest::parse(R"LC("ABCB")LC"));
        Solution sol;
        auto res = sol.exist(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(false)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

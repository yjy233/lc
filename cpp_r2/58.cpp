// 58. 最后一个单词的长度（简单）
// https://leetcode.cn/problems/length-of-last-word/
//
// 给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。
//
// 单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。
//
// 示例 1：
//
// 输入：s = "Hello World"
// 输出：5
// 解释：最后一个单词是“World”，长度为 5。
//
// 示例 2：
//
// 输入：s = "   fly me   to   the moon  "
// 输出：4
// 解释：最后一个单词是“moon”，长度为 4。
//
// 示例 3：
//
// 输入：s = "luffy is still joyboy"
// 输出：6
// 解释：最后一个单词是长度为 6 的“joyboy”。
//
// 提示：
//
//   - 1 <= s.length <= 10^4
//
//   - s 仅有英文字母和空格 ' ' 组成
//
//   - s 中至少存在一个单词
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "Hello World"
// --- case 2 ---
// "   fly me   to   the moon  "
// --- case 3 ---
// "luffy is still joyboy"

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
    int lengthOfLastWord(string s) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("Hello World")LC"));
        Solution sol;
        auto res = sol.lengthOfLastWord(a0);
        fails += lctest::check(++caseNo, res, R"LC(5)LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("   fly me   to   the moon  ")LC"));
        Solution sol;
        auto res = sol.lengthOfLastWord(a0);
        fails += lctest::check(++caseNo, res, R"LC(4)LC");
    }
    // case 3
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("luffy is still joyboy")LC"));
        Solution sol;
        auto res = sol.lengthOfLastWord(a0);
        fails += lctest::check(++caseNo, res, R"LC(6)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

// 68. 文本左右对齐（困难）
// https://leetcode.cn/problems/text-justification/
//
// 给定一个单词数组 words 和一个长度 maxWidth ，重新排版单词，使其成为每行恰好有 maxWidth 个字符，且左右两端对齐的文本。
//
// 你应该使用 “贪心算法” 来放置给定的单词；也就是说，尽可能多地往每行中放置单词。必要时可用空格 ' ' 填充，使得每行恰好有 maxWidth 个字符。
//
// 要求尽可能均匀分配单词间的空格数量。如果某一行单词间的空格不能均匀分配，则左侧放置的空格数要多于右侧的空格数。
//
// 文本的最后一行应为左对齐，且单词之间不插入额外的空格。
//
// 注意:
//
//   - 单词是指由非空格字符组成的字符序列。
//
//   - 每个单词的长度大于 0，小于等于 maxWidth。
//
//   - 输入单词数组 words 至少包含一个单词。
//
// 示例 1:
//
// 输入: words = ["This", "is", "an", "example", "of", "text", "justification."], maxWidth = 16
// 输出:
// [
//    "This    is    an",
//    "example  of text",
//    "justification.  "
// ]
//
// 示例 2:
//
// 输入:words = ["What","must","be","acknowledgment","shall","be"], maxWidth = 16
// 输出:
// [
//   "What   must   be",
//   "acknowledgment  ",
//   "shall be        "
// ]
// 解释: 注意最后一行的格式应为 "shall be    " 而不是 "shall     be",
//     因为最后一行应为左对齐，而不是左右两端对齐。
//     第二行同样为左对齐，这是因为这行只包含一个单词。
//
// 示例 3:
//
// 输入:words = ["Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"]，maxWidth = 20
// 输出:
// [
//   "Science  is  what we",
//   "understand      well",
//   "enough to explain to",
//   "a  computer.  Art is",
//   "everything  else  we",
//   "do                  "
// ]
//
// 提示:
//
//   - 1 <= words.length <= 300
//
//   - 1 <= words[i].length <= 20
//
//   - words[i] 由小写英文字母和符号组成
//
//   - 1 <= maxWidth <= 100
//
//   - words[i].length <= maxWidth
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// ["This", "is", "an", "example", "of", "text", "justification."]
// 16
// --- case 2 ---
// ["What","must","be","acknowledgment","shall","be"]
// 16
// --- case 3 ---
// ["Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"]
// 20

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
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStrVec(lctest::parse(R"LC(["This", "is", "an", "example", "of", "text", "justification."])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(16)LC"));
        Solution sol;
        auto res = sol.fullJustify(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([   "This    is    an",   "example  of text",   "justification.  "])LC");
    }
    // case 2
    {
        auto a0 = lctest::toStrVec(lctest::parse(R"LC(["What","must","be","acknowledgment","shall","be"])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(16)LC"));
        Solution sol;
        auto res = sol.fullJustify(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([  "What   must   be",  "acknowledgment  ",  "shall be        "])LC");
    }
    // case 3
    {
        auto a0 = lctest::toStrVec(lctest::parse(R"LC(["Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(20)LC"));
        Solution sol;
        auto res = sol.fullJustify(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([  "Science  is  what we",  "understand      well",  "enough to explain to",  "a  computer.  Art is",  "everything  else  we",  "do                  "])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

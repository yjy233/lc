// 187. 重复的DNA序列（中等）
// https://leetcode.cn/problems/repeated-dna-sequences/
//
// DNA序列 由一系列核苷酸组成，缩写为 'A', 'C', 'G' 和 'T'.。
//
//   - 例如，"ACGAATTCCG" 是一个 DNA序列 。
//
// 在研究 DNA 时，识别 DNA 中的重复序列非常有用。
//
// 给定一个表示 DNA序列 的字符串 s ，返回所有在 DNA 分子中出现不止一次的 长度为 10 的序列(子字符串)。你可以按 任意顺序 返回答案。
//
// 示例 1：
//
// 输入：s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
// 输出：["AAAAACCCCC","CCCCCAAAAA"]
//
// 示例 2：
//
// 输入：s = "AAAAAAAAAAAAA"
// 输出：["AAAAAAAAAA"]
//
// 提示：
//
//   - 0 <= s.length <= 10^5
//
//   - s[i]=='A'、'C'、'G' or 'T'
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
// --- case 2 ---
// "AAAAAAAAAAAAA"

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
    vector<string> findRepeatedDnaSequences(string s) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT")LC"));
        Solution sol;
        auto res = sol.findRepeatedDnaSequences(a0);
        fails += lctest::check(++caseNo, res, R"LC(["AAAAACCCCC","CCCCCAAAAA"])LC", true);
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("AAAAAAAAAAAAA")LC"));
        Solution sol;
        auto res = sol.findRepeatedDnaSequences(a0);
        fails += lctest::check(++caseNo, res, R"LC(["AAAAAAAAAA"])LC", true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

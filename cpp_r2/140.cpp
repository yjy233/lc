// 140. 单词拆分 II（困难）
// https://leetcode.cn/problems/word-break-ii/
//
// 给定一个字符串 s 和一个字符串字典 wordDict ，在字符串 s 中增加空格来构建一个句子，使得句子中所有的单词都在词典中。以任意顺序 返回所有这些可能的句子。
//
// 注意：词典中的同一个单词可能在分段中被重复使用多次。
//
// 示例 1：
//
// 输入:s = "catsanddog", wordDict = ["cat","cats","and","sand","dog"]
// 输出:["cats and dog","cat sand dog"]
//
// 示例 2：
//
// 输入:s = "pineapplepenapple", wordDict = ["apple","pen","applepen","pine","pineapple"]
// 输出:["pine apple pen apple","pineapple pen apple","pine applepen apple"]
// 解释: 注意你可以重复使用字典中的单词。
//
// 示例 3：
//
// 输入:s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
// 输出:[]
//
// 提示：
//
//   - 1 <= s.length <= 20
//
//   - 1 <= wordDict.length <= 1000
//
//   - 1 <= wordDict[i].length <= 10
//
//   - s 和 wordDict[i] 仅有小写英文字母组成
//
//   - wordDict 中所有字符串都 不同
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "catsanddog"
// ["cat","cats","and","sand","dog"]
// --- case 2 ---
// "pineapplepenapple"
// ["apple","pen","applepen","pine","pineapple"]
// --- case 3 ---
// "catsandog"
// ["cats","dog","sand","and","cat"]

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
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("catsanddog")LC"));
        auto a1 = lctest::toStrVec(lctest::parse(R"LC(["cat","cats","and","sand","dog"])LC"));
        Solution sol;
        auto res = sol.wordBreak(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(["cats and dog","cat sand dog"])LC");
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("pineapplepenapple")LC"));
        auto a1 = lctest::toStrVec(lctest::parse(R"LC(["apple","pen","applepen","pine","pineapple"])LC"));
        Solution sol;
        auto res = sol.wordBreak(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(["pine apple pen apple","pineapple pen apple","pine applepen apple"])LC");
    }
    // case 3
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("catsandog")LC"));
        auto a1 = lctest::toStrVec(lctest::parse(R"LC(["cats","dog","sand","and","cat"])LC"));
        Solution sol;
        auto res = sol.wordBreak(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

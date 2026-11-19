// 126. 单词接龙 II（困难）
// https://leetcode.cn/problems/word-ladder-ii/
//
// 按字典 wordList 完成从单词 beginWord 到单词 endWord 转化，一个表示此过程的 转换序列 是形式上像 beginWord -> s_1 -> s_2 -> ... -> s_k 这样的单词序列，并满足：
//
//   - 每对相邻的单词之间仅有单个字母不同。
//
//   - 转换过程中的每个单词 s_i（1 <= i <= k）必须是字典 wordList 中的单词。注意，beginWord 不必是字典 wordList 中的单词。
//
//   - s_k == endWord
//
// 给你两个单词 beginWord 和 endWord ，以及一个字典 wordList 。请你找出并返回所有从 beginWord 到 endWord 的 最短转换序列 ，如果不存在这样的转换序列，返回一个空列表。每个序列都应该以单词列表 [beginWord, s_1, s_2, ..., s_k] 的形式返回。
//
// 示例 1：
//
// 输入：beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
// 输出：[["hit","hot","dot","dog","cog"],["hit","hot","lot","log","cog"]]
// 解释：存在 2 种最短的转换序列：
// "hit" -> "hot" -> "dot" -> "dog" -> "cog"
// "hit" -> "hot" -> "lot" -> "log" -> "cog"
//
// 示例 2：
//
// 输入：beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]
// 输出：[]
// 解释：endWord "cog" 不在字典 wordList 中，所以不存在符合要求的转换序列。
//
// 提示：
//
//   - 1 <= beginWord.length <= 5
//
//   - endWord.length == beginWord.length
//
//   - 1 <= wordList.length <= 500
//
//   - wordList[i].length == beginWord.length
//
//   - beginWord、endWord 和 wordList[i] 由小写英文字母组成
//
//   - beginWord != endWord
//
//   - wordList 中的所有单词 互不相同
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "hit"
// "cog"
// ["hot","dot","dog","lot","log","cog"]
// --- case 2 ---
// "hit"
// "cog"
// ["hot","dot","dog","lot","log"]

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
using namespace std;

class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

// 44. 通配符匹配（困难）
// https://leetcode.cn/problems/wildcard-matching/
//
// 给你一个输入字符串 (s) 和一个字符模式 (p) ，请你实现一个支持 '?' 和 '*' 匹配规则的通配符匹配：
//
// 	'?' 可以匹配任何单个字符。
//
// 	'*' 可以匹配任意字符序列（包括空字符序列）。
//
// 判定匹配成功的充要条件是：字符模式必须能够 完全匹配 输入字符串（而不是部分匹配）。
//
// 示例 1：
//
// 输入：s = "aa", p = "a"
// 输出：false
// 解释："a" 无法匹配 "aa" 整个字符串。
//
// 示例 2：
//
// 输入：s = "aa", p = "*"
// 输出：true
// 解释：'*' 可以匹配任意字符串。
//
// 示例 3：
//
// 输入：s = "cb", p = "?a"
// 输出：false
// 解释：'?' 可以匹配 'c', 但第二个 'a' 无法匹配 'b'。
//
// 提示：
//
//   - 0 <= s.length, p.length <= 2000
//
//   - s 仅由小写英文字母组成
//
//   - p 仅由小写英文字母、'?' 或 '*' 组成
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "aa"
// "a"
// --- case 2 ---
// "aa"
// "*"
// --- case 3 ---
// "cb"
// "?a"

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
    bool isMatch(string s, string p) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

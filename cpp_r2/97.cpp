// 97. 交错字符串（中等）
// https://leetcode.cn/problems/interleaving-string/
//
// 给定三个字符串 s1、s2、s3，请你帮忙验证 s3 是否是由 s1 和 s2 交错 组成的。
//
// 两个字符串 s 和 t 交错 的定义与过程如下，其中每个字符串都会被分割成若干 非空 子字符串：
//
//   - s = s_1 + s_2 + ... + s_n
//
//   - t = t_1 + t_2 + ... + t_m
//
//   - |n - m| <= 1
//
//   - 交错 是 s_1 + t_1 + s_2 + t_2 + s_3 + t_3 + ... 或者 t_1 + s_1 + t_2 + s_2 + t_3 + s_3 + ...
//
// 注意：a + b 意味着字符串 a 和 b 连接。
//
// 示例 1：
//
// 输入：s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
// 输出：true
//
// 示例 2：
//
// 输入：s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
// 输出：false
//
// 示例 3：
//
// 输入：s1 = "", s2 = "", s3 = ""
// 输出：true
//
// 提示：
//
//   - 0 <= s1.length, s2.length <= 100
//
//   - 0 <= s3.length <= 200
//
//   - s1、s2、和 s3 都由小写英文字母组成
//
// 进阶：您能否仅使用 O(s2.length) 额外的内存空间来解决它?
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "aabcc"
// "dbbca"
// "aadbbcbcac"
// --- case 2 ---
// "aabcc"
// "dbbca"
// "aadbbbaccc"
// --- case 3 ---
// ""
// ""
// ""

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
    bool isInterleave(string s1, string s2, string s3) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

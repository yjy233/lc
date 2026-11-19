// 17. 电话号码的字母组合（中等）
// https://leetcode.cn/problems/letter-combinations-of-a-phone-number/
//
// 给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。答案可以按 任意顺序 返回。
//
// 给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。
//
// 示例 1：
//
// 输入：digits = "23"
// 输出：["ad","ae","af","bd","be","bf","cd","ce","cf"]
//
// 示例 2：
//
// 输入：digits = "2"
// 输出：["a","b","c"]
//
// 提示：
//
//   - 1 <= digits.length <= 4
//
//   - digits[i] 是范围 ['2', '9'] 的一个数字。
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// "23"
// --- case 2 ---
// "2"

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
    vector<string> letterCombinations(string digits) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("23")LC"));
        Solution sol;
        auto res = sol.letterCombinations(a0);
        fails += lctest::check(++caseNo, res, R"LC(["ad","ae","af","bd","be","bf","cd","ce","cf"])LC", true);
    }
    // case 2
    {
        auto a0 = lctest::toStr(lctest::parse(R"LC("2")LC"));
        Solution sol;
        auto res = sol.letterCombinations(a0);
        fails += lctest::check(++caseNo, res, R"LC(["a","b","c"])LC", true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

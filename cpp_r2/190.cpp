// 190. 颠倒二进制位（简单）
// https://leetcode.cn/problems/reverse-bits/
//
// 颠倒给定的 32 位有符号整数的二进制位。
//
// 示例 1：
//
// 输入：n = 43261596
//
// 输出：964176192
//
// 解释：
//
// 			整数
// 			二进制
//
// 			43261596
// 			00000010100101000001111010011100
//
// 			964176192
// 			00111001011110000010100101000000
//
// 示例 2：
//
// 输入：n = 2147483644
//
// 输出：1073741822
//
// 解释：
//
// 			整数
// 			二进制
//
// 			2147483644
// 			01111111111111111111111111111100
//
// 			1073741822
// 			00111111111111111111111111111110
//
// 提示：
//
//   - 0 <= n <= 2^31 - 2
//
//   - n 为偶数
//
// 进阶: 如果多次调用这个函数，你将如何优化你的算法？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// 43261596
// --- case 2 ---
// 2147483644

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
    int reverseBits(int n) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(43261596)LC"));
        Solution sol;
        auto res = sol.reverseBits(a0);
        fails += lctest::check(++caseNo, res, R"LC(964176192)LC");
    }
    // case 2
    {
        auto a0 = lctest::toInt(lctest::parse(R"LC(2147483644)LC"));
        Solution sol;
        auto res = sol.reverseBits(a0);
        fails += lctest::check(++caseNo, res, R"LC(1073741822)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

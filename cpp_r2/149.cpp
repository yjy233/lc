// 149. 直线上最多的点数（困难）
// https://leetcode.cn/problems/max-points-on-a-line/
//
// 给你一个数组 points ，其中 points[i] = [x_i, y_i] 表示 X-Y 平面上的一个点。求最多有多少个点在同一条直线上。
//
// 示例 1：
//
// 输入：points = [[1,1],[2,2],[3,3]]
// 输出：3
//
// 示例 2：
//
// 输入：points = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
// 输出：4
//
// 提示：
//
//   - 1
//
//   - points[i].length == 2
//
//   - -10^4
//
//   - points 中的所有点 互不相同
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [[1,1],[2,2],[3,3]]
// --- case 2 ---
// [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]

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
    int maxPoints(vector<vector<int>>& points) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[1,1],[2,2],[3,3]])LC"));
        Solution sol;
        auto res = sol.maxPoints(a0);
        fails += lctest::check(++caseNo, res, R"LC(3)LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntGrid(lctest::parse(R"LC([[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]])LC"));
        Solution sol;
        auto res = sol.maxPoints(a0);
        fails += lctest::check(++caseNo, res, R"LC(4)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

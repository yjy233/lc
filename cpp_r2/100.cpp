// 100. 相同的树（简单）
// https://leetcode.cn/problems/same-tree/
//
// 给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。
//
// 如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
//
// 示例 1：
//
// 输入：p = [1,2,3], q = [1,2,3]
// 输出：true
//
// 示例 2：
//
// 输入：p = [1,2], q = [1,null,2]
// 输出：false
//
// 示例 3：
//
// 输入：p = [1,2,1], q = [1,1,2]
// 输出：false
//
// 提示：
//
//   - 两棵树上的节点数目都在范围 [0, 100] 内
//
//   - -10^4
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,3]
// [1,2,3]
// --- case 2 ---
// [1,2]
// [1,null,2]
// --- case 3 ---
// [1,2,1]
// [1,1,2]

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
#include "node.h"
#include "test_util.h"
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1,2,3])LC"));
        auto a1 = lctest::toTree(lctest::parse(R"LC([1,2,3])LC"));
        Solution sol;
        auto res = sol.isSameTree(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    // case 2
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1,2])LC"));
        auto a1 = lctest::toTree(lctest::parse(R"LC([1,null,2])LC"));
        Solution sol;
        auto res = sol.isSameTree(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(false)LC");
    }
    // case 3
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1,2,1])LC"));
        auto a1 = lctest::toTree(lctest::parse(R"LC([1,1,2])LC"));
        Solution sol;
        auto res = sol.isSameTree(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC(false)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

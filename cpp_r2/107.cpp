// 107. 二叉树的层序遍历 II（中等）
// https://leetcode.cn/problems/binary-tree-level-order-traversal-ii/
//
// 给你二叉树的根节点 root ，返回其节点值 自底向上的层序遍历 。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
//
// 示例 1：
//
// 输入：root = [3,9,20,null,null,15,7]
// 输出：[[15,7],[9,20],[3]]
//
// 示例 2：
//
// 输入：root = [1]
// 输出：[[1]]
//
// 示例 3：
//
// 输入：root = []
// 输出：[]
//
// 提示：
//
//   - 树中节点数目在范围 [0, 2000] 内
//
//   - -1000 <= Node.val <= 1000
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [3,9,20,null,null,15,7]
// --- case 2 ---
// [1]
// --- case 3 ---
// []

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([3,9,20,null,null,15,7])LC"));
        Solution sol;
        auto res = sol.levelOrderBottom(a0);
        fails += lctest::check(++caseNo, res, R"LC([[15,7],[9,20],[3]])LC");
    }
    // case 2
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1])LC"));
        Solution sol;
        auto res = sol.levelOrderBottom(a0);
        fails += lctest::check(++caseNo, res, R"LC([[1]])LC");
    }
    // case 3
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([])LC"));
        Solution sol;
        auto res = sol.levelOrderBottom(a0);
        fails += lctest::check(++caseNo, res, R"LC([])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

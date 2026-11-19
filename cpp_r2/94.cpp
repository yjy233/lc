// 94. 二叉树的中序遍历（简单）
// https://leetcode.cn/problems/binary-tree-inorder-traversal/
//
// 给定一个二叉树的根节点 root ，返回 它的 中序 遍历 。
//
// 示例 1：
//
// 输入：root = [1,null,2,3]
// 输出：[1,3,2]
//
// 示例 2：
//
// 输入：root = []
// 输出：[]
//
// 示例 3：
//
// 输入：root = [1]
// 输出：[1]
//
// 提示：
//
//   - 树中节点数目在范围 [0, 100] 内
//
//   - -100 <= Node.val <= 100
//
// 进阶: 递归算法很简单，你可以通过迭代算法完成吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,null,2,3]
// --- case 2 ---
// [1,2,3,4,5,null,8,null,null,6,7,9]
// --- case 3 ---
// []
// --- case 4 ---
// [1]

#include "node.h"
#include "test_util.h"
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
    vector<int> inorderTraversal(TreeNode *root) {
        stack<TreeNode *> stk;
        vector<int> res;

        while (root || !stk.empty()) {
            if (root == nullptr) {
                root = stk.top();
                stk.pop();
                res.push_back(root->val);
                root = root->right;
                continue;
            }

            if (root->left) {
                stk.push(root);
                root = root->left;
                continue;
            }

            res.push_back(root->val);
            root = root->right;
        }

        return res;
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1,null,2,3])LC"));
        Solution sol;
        auto res = sol.inorderTraversal(a0);
        fails += lctest::check(++caseNo, res, R"LC([1,3,2])LC");
    }
    // case 2
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([])LC"));
        Solution sol;
        auto res = sol.inorderTraversal(a0);
        fails += lctest::check(++caseNo, res, R"LC([])LC");
    }
    // case 3
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1])LC"));
        Solution sol;
        auto res = sol.inorderTraversal(a0);
        fails += lctest::check(++caseNo, res, R"LC([1])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

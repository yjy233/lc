// 105. 从前序与中序遍历序列构造二叉树（中等）
// https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
//
// 给定两个整数数组 preorder 和 inorder ，其中 preorder 是二叉树的先序遍历， inorder 是同一棵树的中序遍历，请构造二叉树并返回其根节点。
//
// 示例 1:
//
// 输入: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
// 输出: [3,9,20,null,null,15,7]
//
// 示例 2:
//
// 输入: preorder = [-1], inorder = [-1]
// 输出: [-1]
//
// 提示:
//
//   - 1 <= preorder.length <= 3000
//
//   - inorder.length == preorder.length
//
//   - -3000 <= preorder[i], inorder[i] <= 3000
//
//   - preorder 和 inorder 均 无重复 元素
//
//   - inorder 均出现在 preorder
//
//   - preorder 保证 为二叉树的前序遍历序列
//
//   - inorder 保证 为二叉树的中序遍历序列
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [3,9,20,15,7]
// [9,3,15,20,7]
// --- case 2 ---
// [-1]
// [-1]

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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([3,9,20,15,7])LC"));
        auto a1 = lctest::toIntVec(lctest::parse(R"LC([9,3,15,20,7])LC"));
        Solution sol;
        auto res = sol.buildTree(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([3,9,20,null,null,15,7])LC");
    }
    // case 2
    {
        auto a0 = lctest::toIntVec(lctest::parse(R"LC([-1])LC"));
        auto a1 = lctest::toIntVec(lctest::parse(R"LC([-1])LC"));
        Solution sol;
        auto res = sol.buildTree(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([-1])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

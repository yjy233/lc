// 144. 二叉树的前序遍历（简单）
// https://leetcode.cn/problems/binary-tree-preorder-traversal/
//
// 给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
//
// 示例 1：
//
// 输入：root = [1,null,2,3]
//
// 输出：[1,2,3]
//
// 解释：
//
// 示例 2：
//
// 输入：root = [1,2,3,4,5,null,8,null,null,6,7,9]
//
// 输出：[1,2,4,5,6,7,3,8,9]
//
// 解释：
//
// 示例 3：
//
// 输入：root = []
//
// 输出：[]
//
// 示例 4：
//
// 输入：root = [1]
//
// 输出：[1]
//
// 提示：
//
//   - 树中节点数目在范围 [0, 100] 内
//
//   - -100 <= Node.val <= 100
//
// 进阶：递归算法很简单，你可以通过迭代算法完成吗？
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
    vector<int> preorderTraversal(TreeNode* root) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

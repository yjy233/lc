// 101. 对称二叉树（简单）
// https://leetcode.cn/problems/symmetric-tree/
//
// 给你一个二叉树的根节点 root ， 检查它是否轴对称。
//
// 示例 1：
//
// 输入：root = [1,2,2,3,4,4,3]
// 输出：true
//
// 示例 2：
//
// 输入：root = [1,2,2,null,3,null,3]
// 输出：false
//
// 提示：
//
//   - 树中节点数目在范围 [1, 1000] 内
//
//   - -100 <= Node.val <= 100
//
// 进阶：你可以运用递归和迭代两种方法解决这个问题吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,2,3,4,4,3]
// --- case 2 ---
// [1,2,2,null,3,null,3]

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
    bool isSymmetric(TreeNode* root) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

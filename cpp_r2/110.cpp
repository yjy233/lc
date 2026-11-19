// 110. 平衡二叉树（简单）
// https://leetcode.cn/problems/balanced-binary-tree/
//
// 给定一个二叉树，判断它是否是 平衡二叉树
//
// 示例 1：
//
// 输入：root = [3,9,20,null,null,15,7]
// 输出：true
//
// 示例 2：
//
// 输入：root = [1,2,2,3,3,null,null,4,4]
// 输出：false
//
// 示例 3：
//
// 输入：root = []
// 输出：true
//
// 提示：
//
//   - 树中的节点数在范围 [0, 5000] 内
//
//   - -10^4 <= Node.val <= 10^4
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [3,9,20,null,null,15,7]
// --- case 2 ---
// [1,2,2,3,3,null,null,4,4]
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
    bool isBalanced(TreeNode* root) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

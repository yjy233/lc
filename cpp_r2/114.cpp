// 114. 二叉树展开为链表（中等）
// https://leetcode.cn/problems/flatten-binary-tree-to-linked-list/
//
// 给你二叉树的根结点 root ，请你将它展开为一个单链表：
//
//   - 展开后的单链表应该同样使用 TreeNode ，其中 right 子指针指向链表中下一个结点，而左子指针始终为 null 。
//
//   - 展开后的单链表应该与二叉树 先序遍历 顺序相同。
//
// 示例 1：
//
// 输入：root = [1,2,5,3,4,null,6]
// 输出：[1,null,2,null,3,null,4,null,5,null,6]
//
// 示例 2：
//
// 输入：root = []
// 输出：[]
//
// 示例 3：
//
// 输入：root = [0]
// 输出：[0]
//
// 提示：
//
//   - 树中结点数在范围 [0, 2000] 内
//
//   - -100
//
// 进阶：你可以使用原地算法（O(1) 额外空间）展开这棵树吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,5,3,4,null,6]
// --- case 2 ---
// []
// --- case 3 ---
// [0]

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
    void flatten(TreeNode* root) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1,2,5,3,4,null,6])LC"));
        Solution sol;
        sol.flatten(a0);
        fails += lctest::check(++caseNo, a0, R"LC([1,null,2,null,3,null,4,null,5,null,6])LC");
    }
    // case 2
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([])LC"));
        Solution sol;
        sol.flatten(a0);
        fails += lctest::check(++caseNo, a0, R"LC([])LC");
    }
    // case 3
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([0])LC"));
        Solution sol;
        sol.flatten(a0);
        fails += lctest::check(++caseNo, a0, R"LC([0])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

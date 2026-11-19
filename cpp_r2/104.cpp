// 104. 二叉树的最大深度（简单）
// https://leetcode.cn/problems/maximum-depth-of-binary-tree/
//
// 给定一个二叉树 root ，返回其最大深度。
//
// 二叉树的 最大深度 是指从根节点到最远叶子节点的最长路径上的节点数。
//
// 示例 1：
//
// 输入：root = [3,9,20,null,null,15,7]
// 输出：3
//
// 示例 2：
//
// 输入：root = [1,null,2]
// 输出：2
//
// 提示：
//
//   - 树中节点的数量在 [0, 10^4] 区间内。
//
//   - -100 <= Node.val <= 100
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [3,9,20,null,null,15,7]
// --- case 2 ---
// [1,null,2]

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
    int maxDepth(TreeNode* root) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([3,9,20,null,null,15,7])LC"));
        Solution sol;
        auto res = sol.maxDepth(a0);
        fails += lctest::check(++caseNo, res, R"LC(3)LC");
    }
    // case 2
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1,null,2])LC"));
        Solution sol;
        auto res = sol.maxDepth(a0);
        fails += lctest::check(++caseNo, res, R"LC(2)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

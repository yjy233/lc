// 98. 验证二叉搜索树（中等）
// https://leetcode.cn/problems/validate-binary-search-tree/
//
// 给你一个二叉树的根节点 root ，判断其是否是一个有效的二叉搜索树。
//
// 有效 二叉搜索树定义如下：
//
//   - 节点的左子树只包含 严格小于 当前节点的数。
//
//   - 节点的右子树只包含 严格大于 当前节点的数。
//
//   - 所有左子树和右子树自身必须也是二叉搜索树。
//
// 示例 1：
//
// 输入：root = [2,1,3]
// 输出：true
//
// 示例 2：
//
// 输入：root = [5,1,4,null,null,3,6]
// 输出：false
// 解释：根节点的值是 5 ，但是右子节点的值是 4 。
//
// 提示：
//
//   - 树中节点数目范围在[1, 10^4] 内
//
//   - -2^31 <= Node.val <= 2^31 - 1
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [2,1,3]
// --- case 2 ---
// [5,1,4,null,null,3,6]

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
    bool isValidBST(TreeNode* root) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([2,1,3])LC"));
        Solution sol;
        auto res = sol.isValidBST(a0);
        fails += lctest::check(++caseNo, res, R"LC(true)LC");
    }
    // case 2
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([5,1,4,null,null,3,6])LC"));
        Solution sol;
        auto res = sol.isValidBST(a0);
        fails += lctest::check(++caseNo, res, R"LC(false)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

// 111. 二叉树的最小深度（简单）
// https://leetcode.cn/problems/minimum-depth-of-binary-tree/
//
// 给定一个二叉树，找出其最小深度。
//
// 最小深度是从根节点到最近叶子节点的最短路径上的节点数量。
//
// 说明：叶子节点是指没有子节点的节点。
//
// 示例 1：
//
// 输入：root = [3,9,20,null,null,15,7]
// 输出：2
//
// 示例 2：
//
// 输入：root = [2,null,3,null,4,null,5,null,6]
// 输出：5
//
// 提示：
//
//   - 树中节点数的范围在 [0, 10^5] 内
//
//   - -1000
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [3,9,20,null,null,15,7]
// --- case 2 ---
// [2,null,3,null,4,null,5,null,6]

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
    int minDepth(TreeNode* root) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([3,9,20,null,null,15,7])LC"));
        Solution sol;
        auto res = sol.minDepth(a0);
        fails += lctest::check(++caseNo, res, R"LC(2)LC");
    }
    // case 2
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([2,null,3,null,4,null,5,null,6])LC"));
        Solution sol;
        auto res = sol.minDepth(a0);
        fails += lctest::check(++caseNo, res, R"LC(5)LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

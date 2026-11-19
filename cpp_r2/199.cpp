// 199. 二叉树的右视图（中等）
// https://leetcode.cn/problems/binary-tree-right-side-view/
//
// 给定一个二叉树的 根节点 root，想象自己站在它的右侧，按照从顶部到底部的顺序，返回从右侧所能看到的节点值。
//
// 示例 1：
//
// 输入：root = [1,2,3,null,5,null,4]
//
// 输出：[1,3,4]
//
// 解释：
//
// 示例 2：
//
// 输入：root = [1,2,3,4,null,null,null,5]
//
// 输出：[1,3,4,5]
//
// 解释：
//
// 示例 3：
//
// 输入：root = [1,null,3]
//
// 输出：[1,3]
//
// 示例 4：
//
// 输入：root = []
//
// 输出：[]
//
// 提示:
//
//   - 二叉树的节点个数的范围是 [0,100]
//
//   - -100 <= Node.val <= 100
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,3,null,5,null,4]
// --- case 2 ---
// [1,2,3,4,null,null,null,5]
// --- case 3 ---
// [1,null,3]
// --- case 4 ---
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
    vector<int> rightSideView(TreeNode* root) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1,2,3,null,5,null,4])LC"));
        Solution sol;
        auto res = sol.rightSideView(a0);
        fails += lctest::check(++caseNo, res, R"LC([1,3,4])LC");
    }
    // case 2
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1,2,3,4,null,null,null,5])LC"));
        Solution sol;
        auto res = sol.rightSideView(a0);
        fails += lctest::check(++caseNo, res, R"LC([1,3,4,5])LC");
    }
    // case 3
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([1,null,3])LC"));
        Solution sol;
        auto res = sol.rightSideView(a0);
        fails += lctest::check(++caseNo, res, R"LC([1,3])LC");
    }
    // case 4
    {
        auto a0 = lctest::toTree(lctest::parse(R"LC([])LC"));
        Solution sol;
        auto res = sol.rightSideView(a0);
        fails += lctest::check(++caseNo, res, R"LC([])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

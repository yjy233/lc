#include "node.h"

using namespace std;

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int val = 0;
        helper230(root,k, val);
        return val;
    }

    void helper230(TreeNode* root, int& k, int& val) {
        if (!root) return;

        helper230(root->left,k, val);
        k--;
        if (!k) {
            val = root->val;
        }

        helper230(root->right, k,val);
    }
};
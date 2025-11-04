#include "node.h"


using namespace std;
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        bool res = true;
        helper(root, res);
        return res;
    }

    vector<int> helper(TreeNode* root, bool& res) {
        if (root == nullptr || !res) return {};


        vector<int> m = {root->val,root->val};

        vector<int> l = helper(root->left, res);
        if (l.size() > 0 && l[1] >= root->val) {
            res = false;
            return {};
        }

        if (l.size() > 0) {
            m[0] = l[0];
        }

        if (!res) return{};

        vector<int> r = helper(root->right, res);
        if (l.size() > 0 && r[0] <= root->val) {
            res = false;
            return {};
        }

        if (r.size() > 0) {
            m[1] = r[1];
        }


        return m;
    }
};
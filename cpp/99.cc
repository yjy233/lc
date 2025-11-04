#include"node.h"
#include<vector>
using namespace std;

class Solution {
public:
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> res;
        //res.reserve(20);
        helper(res, root);
        //return;

        int idx0 = -1;
        int idx1 = -1;
        // [3,2,1]
        // [1,2,3]

        // 1,
        for (int i = 1;i<res.size();i++){
            if (res[i-1]->val > res[i]->val) {
                if (idx0 == -1) {
                    idx0 = i-1;
                    continue;
                } 

                idx1 = i;
            }
        }
        if (idx0 == -1) {
            //cout<<"fail"<<endl;
            return ;
        }

        if (idx1 == -1) idx1 = idx0+1;
        int tmp = res[idx0]->val;
        res[idx0]->val = res[idx1]->val;
        res[idx1]->val = tmp;
        //swap(res[idx0]->val, res[idx1]->val);
    }

    void helper(vector<TreeNode*>& dump,TreeNode* root) {
        if (!root) {
            return;
        }

        helper(dump, root->left);
        dump.push_back(root);
        helper(dump, root->right);
    }
};
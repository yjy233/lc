#include<vector>
#include<stack>

#include"node.h"

using namespace std;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nums;
        nums.reserve(10);


        stack<TreeNode*> st;
        
        while(!st.empty() || root != nullptr){
            if (!root){

                root = st.top();
                st.pop();
                continue;
            }


            if (root->left == nullptr) {
                nums.push_back(root->val);
                root = nullptr;
                continue;
            }
            st.push(root->right);
            st.push(root);
            root = root->left;
        }


        return nums;
    }   
};
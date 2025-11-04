#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        res.reserve(1<<nums.size());
        
        vector<int> path;
        path.reserve(nums.size());

        vector<bool> use(nums.size(),false);

        helper(res, nums, path, use);
        return res;
    }

    void helper(vector<vector<int>> &res,vector<int>& nums, vector<int> &path,vector<bool> &use) {
        if (path.size() >= nums.size()) {
            res.emplace_back(path);
            return;
        }

        for (int i = 0;i<nums.size();i++){
            if (use[i] || 
                (i > 0 && nums[i-1] == nums[i] && !use[i-1])
            ) continue;

            path.emplace_back(nums[i]);
            use[i] = true;
            helper(res, nums, path, use);
            use[i] = false;
            path.pop_back();
        }
    }
};
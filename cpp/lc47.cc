#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<bool> use(nums.size(),false);
        vector<int> path;

        helper(res, path, use, nums);
        return res;
    }

    void helper(vector<vector<int>>& res, vector<int>& path, vector<bool>& use,vector<int>& nums) {
        if (path.size() >= nums.size()) {
            res.push_back(path);
            return;
        }

        for (int i=0;i<nums.size();i++) {
            if (use[i]) {
                continue;
            }

            if (i>0 && nums[i-1] == nums[i] && !use[i-1]) continue;


            path.push_back(nums[i]);
            use[i] = true;  

            helper(res, path, use, nums);
            
            use[i] = false;
            path.pop_back();
        }

    


    }
};
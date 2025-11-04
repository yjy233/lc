#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        res.reserve(10);

        vector<int> path;
        path.reserve(candidates.size());

        vector<bool> use(candidates.size(),false);
        helper(candidates, target,0, path, use,res);
        return res;
    }

    void helper(vector<int>& nums, int target, int idx, vector<int>& path, vector<bool>& use, vector<vector<int>>& res) {
        if (target <= 0 ) {
            if (target == 0) res.push_back(path);
            return;
        }

        if (idx  >= nums.size()) return;

        for (int i = idx;i<nums.size();i++) {

            if (target < nums[i]) return ;

            if (i > 0 && nums[i-1] == nums[i] && !use[i-1]) continue;

            path.push_back(nums[i]);
            use[i] = true;
            helper(nums, target-nums[i], i+1,path, use,res);
            use[i] = false;
            path.pop_back();
        }
    }
};
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        res.reserve(candidates.size());

        vector<int> path;
        path.reserve(candidates.size());

        helper(candidates, res, target, path, 0);
        return res;
    }

    void helper(vector<int>& nums, vector<vector<int>>& res, int target, vector<int>& path, int idx) {
        if (target <= 0) {
            if (target == 0) res.push_back(path);
            return;
        }

        if (idx >= nums.size()) return;

        for (int i = idx;i<nums.size();i++) {
            if (target < nums[i]) return;

            path.push_back(nums[i]);
            helper(nums, res, target-nums[i],path, i);
            path.pop_back();
        }

    }
};
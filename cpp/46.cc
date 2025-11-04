#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        res.reserve(max(8,1 << nums.size()));   

        vector<int> path;
        path.reserve(nums.size());

        vector<bool> use(nums.size(), false);

        helper(nums, path, use, res);
        return res;
    }

    void helper(vector<int>& nums, vector<int>& path, vector<bool>& use, vector<vector<int>>& res){
        if (path.size() == nums.size()) {
            res.push_back(path);
            return;
        }

        for (int i = 0;i<nums.size();i++) {
            if (use[i]) continue;
            if (i > 0 && nums[i-1] == nums[i] && !use[i-1]) continue;

            path.push_back(nums[i]);
            use[i] = true;
            helper(nums, path, use, res);
            use[i] = false;
            path.pop_back();
        }

    }
};
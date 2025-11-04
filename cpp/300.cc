#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> dp;

        int length = nums.size();
        if (length <= 1) return length;
        
        
        dp.push_back(nums[0]);

        for (int i = 0;i<length;i++) {
            //for (auto& e:dp) cout<<e<<" ";
            //cout<<endl;
            auto pos = lower_bound(dp.begin(), dp.end(), nums[i]);


            //cout<<pos-dp.begin()<<endl;
            int idx = pos-dp.begin();
            if (idx >= dp.size()) {
                dp.push_back(nums[i]);
                continue;
            }
            dp[idx] = nums[i];
        }
        return dp.size();
    }
};
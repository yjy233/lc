
#include <vector>

using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);

        for (auto& e:nums) dp[e] = 1;

        for (int i=0;i<nums.size();i++){
            if (dp[i] == -1) return i;
        }

        return nums.size();
    }
};
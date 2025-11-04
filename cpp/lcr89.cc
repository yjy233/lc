#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int l = nums.size();
        if (l == 0) return 0;
        if (l == 1) return nums[0];
        if (l == 2) return max(nums[0], nums[1]);
        
        for (int i = 2;i<nums.size();i++) {
            if (i <= 2) {
                nums[i] += nums[i-2];
                continue;
            }

            nums[i] += max(nums[i-2], nums[i-3]);
        }

        
        return max(nums[l-1], nums[l-2]);
    }
};
#include <vector>


using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);

        
        vector<int> d0(nums.begin(), nums.end()-1);
        vector<int> d1(nums.begin()+1, nums.end());
        return max(helper(d0), helper(d1));
    }

    int helper(vector<int>& nums) {
        int l = nums.size();
        if (l==0) return 0;
        if (l==1) return nums[0];
        if (l==2) return max(nums[0], nums[1]);


        for (int i = 2;i < l;i++) {
            if (i == 2) {

                nums[i] += nums[i-2];
                continue;
            }
            nums[i] += max(nums[i-2], nums[i-3]);
        }

        return max(nums[l-2], nums[l-1]);
    }
};
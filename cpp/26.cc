#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() == 0) return 0;
        int pre = nums[0];
        int dupCnt = 0;

        for (int i = 1;i<nums.size();i++) {
            if (nums[i] == pre) {
                dupCnt++;
                continue;
            }

            nums[i-dupCnt] = nums[i];
            pre = nums[i];
        }
        
        return nums.size() - dupCnt;
    }
};
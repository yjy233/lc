#include <vector>

using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1;

        for (int i = nums.size()-1;i>0;i--) {
            if (nums[i] <= nums[i-1]) {
                continue;
            }

            idx = i-1;
            break;
        }

        if (idx == -1) {
            sort(nums.begin(), nums.end());
            return;
        }


        int nIdx = idx;

        for (int i = idx+1;i<nums.size();i++) {
            if (nums[i] > nums[idx]) {
                if (nIdx == idx || nums[i] < nums[nIdx]) {
                    nIdx = i;
                }
            }
        }

        swap(nums[idx], nums[nIdx]);

        sort(nums.begin()+idx, nums.end());

    }
};


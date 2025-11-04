#include<vector>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int length = nums.size();
        for (int i = 0;i<length;i++) {
            
            while (nums[i] != i+1) {
                int v = nums[i];

                if (v <= 0 || v > length) {
                    break;
                }

                if (nums[v-1] == v) {
                    break;
                }

                swap(nums[i], nums[v-1]);
            }
        }

        for (int i = 0;i<length;i++) {
            if (nums[i] != i+1) return i+1;
        }
        return length+1;
    }
};
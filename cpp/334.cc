#include <vector>

using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int l = nums.size();
        if ( l < 3) return false;

        int a = nums[0];
        int b = -1;

        for (int i = 1;i<l;i++) {
            if (b != -1 && nums[i] > b) {
                return true;
            }

            if (nums[i] > a && (nums[i] < b || b == -1)) {
                b = nums[i];
            }

            if (nums[i] < a) {
                a = nums[i];
            }

        }
        return false;
    }
};
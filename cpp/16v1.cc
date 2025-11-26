#include <vector>

using namespace std;

class Solution {
  public:
    int threeSumClosest(vector<int> &nums, int target) {

        int len = nums.size();
        if (len < 3) return 0;
        sort(nums.begin(), nums.end());

        int res = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < len; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int l = i + 1;
            int r = len - 1;
            while (r > l) {
                if (l > i + 1 && nums[l - 1] == nums[l]) {
                    l++;
                    continue;
                }

                if (r < len - 1 && nums[r] == nums[r + 1]) {
                    r--;
                    continue;
                }

                int sum = nums[i] + nums[l] + nums[r];
                if (abs(sum - target) < abs(res - target)) {
                    res = sum;
                }

                if (sum > target) {
                    r--;
                    continue;
                }
                l++;
            }
        };
        return res;
    }
};
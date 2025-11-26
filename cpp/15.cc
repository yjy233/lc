#include <vector>

using namespace std;
class Solution {
  public:
    vector<vector<int>> threeSum(vector<int> &nums) {

        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        int len = nums.size();
        for (int i = 0; i < len - 2; i++) {
            if (i >= 1 && nums[i] == nums[i - 1]) {
                continue;
            }

            int l = i + 1;
            int r = len - 1;

            while (l < r) {
                if (l > i + 1 && nums[l] == nums[l - 1]) {
                    l++;
                    continue;
                }

                if (r < len - 1 && nums[r] == nums[r + 1]) {
                    r--;
                    continue;
                }

                if (nums[i] + nums[l] + nums[r] == 0) {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    continue;
                }

                if (nums[i] + nums[l] + nums[r] < 0) {
                    l++;
                    continue;
                }
                r--;
            }
        }
        return res;
    }
};
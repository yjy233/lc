#include<vector>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        if (nums.size() < k) return -1;
        if (nums.size() == 1) return nums[0];

        if (nums.size() == 2) {
            if (k == 1) {
                return max(nums[0],nums[1]);
            }
            return min(nums[0],nums[1]);
        }
        int thx = nums[0];

        int l = 1; 
        int r = nums.size()-1;

        while(l < r) {
            if (nums[l] < thx) {
                l++;
                continue;
            }

            if (nums[r] >= thx) {
                r--;
                continue;
            }

            swap(nums[l], nums[r]);
        }

        while(l-1 >= 0 && nums[l] >= thx) {
            l--;
        }
        while(l+1<nums.size() && nums[l+1] < thx) {
            l++;
        }

        swap(nums[0], nums[l]);

        // 0 1 2 3      4 - 2 -1 
        int moreCnt = nums.size() - 1 - l;
        if (moreCnt >= k) {
            vector<int> nx(nums.begin()+l+1, nums.end());
            return findKthLargest(nx, k);
        }

        vector<int> nx(nums.begin()+l+1, nums.end());
        return findKthLargest(nx, k- moreCnt);
    }
};
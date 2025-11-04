#include<vector>

using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if (target > nums.back()) return nums.size();
        
        int len = nums.size();
        if (len <= 0) return 0;

        if (target <= nums[0]) return 0;


        int r = len-1;
        int l = 0;

        while (l <= r) {
            if (target > nums[r]) {
                return r;
            } 
            if (target <= nums[l]) {
                return l;
            }

            int mid = (r+l)/2;
            if (mid == r || mid == l) break;


            if (nums[mid] == target) return mid;
            if (nums[mid] > target) {
                r = mid;
                continue;
            }
            l = mid;
        }

        if (target == nums[l]) return l;
        if (target == nums[r]) return r;

        if (r < l) {
            swap(r,l);
        }

        if (target < nums[l]) return max(0, l -1);

        if (target <= nums[r]) return max(0,r);


        return r+1;
    }
};
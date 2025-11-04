#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int idx = bs(nums, target);
        if (idx == -1) {
            return {-1,-1};
        }
        return {fl(nums,idx, target), idx};
    }


    int bs(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        while(l <= r) {
            
            if (nums[l] == target) return l;
            if (nums[r] == target) return r;

            int mid = (l+r)/2;
            if (mid == l || mid == r) break;
            if (nums[mid] == target) return mid;

            if (nums[mid] < target) {
                l = mid;
                continue;
            }
            r = mid;
        }
        return -1;
    }

    int fl(vector<int>& nums, int idx, int target){

        if (idx == 0) {
            return 0;
        }

        if (nums[idx-1] != target) {
            return idx;
        }

        int l = 0;
        while(l < idx) {
            if (idx == 0) {
                return idx;
            }
            if (nums[idx-1] != target) {
                return idx;
            }


            int mid = (l+idx)/2;
            if (mid == l || mid == idx) break;


            if (nums[mid] == target){
                idx = mid;
                continue;
            }

            l = mid;
        }

        while(nums[idx] == target) idx--;

        return idx;
    }

    int rl(vector<int>& nums, int idx, int target)
};
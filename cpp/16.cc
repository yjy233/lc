#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        for (auto&e:nums) cout<<e<<" ";
        cout<<endl;

        int res = nums[0] + nums[1] + nums[2];
        int length = nums.size();
        for (int i = 0;i<length-2;i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int l = i+1;
            int r = length-1;

            while(l < r) {
                int tmp = nums[i] + nums[l] + nums[r];

                //cout<<tmp<<". --- "<<endl;
                if (abs(tmp-target) < abs(res-target)) {
                    res = tmp;
                }
                
                if (tmp > target) {
                    r--;
                    continue;
                }
                l++;
            }
        }
        return res;
    }
};
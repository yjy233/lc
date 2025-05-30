#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;


/*

    很简单先排序，然后for 第一个数，然后后面双指针


    比较要注意的是去重的细节,和 lc14一样，就是 2*nums[i]>rest_target
    2*nums[j] < rest_target break掉
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> res;
        int l = nums.size();

        sort(nums.begin(),nums.end());

        for (int s=0;s<l-2;s++) {
            if (s > 0 && nums[s-1] == nums[s]) {
                continue;
            }


            int target = 0-nums[s];

            int i = s+1;
            int j = l-1;

            while(i<j) {
                if (i > s+1 && nums[i] == nums[i-1]) {i++;continue;}

                if (j<l-1 && nums[j] == nums[j+1]) {j--;continue;}

                if (nums[i] + nums[i] > target || nums[j] + nums[j] < target) break;

                if (nums[i] + nums[j] == target) {
                    res.push_back({nums[s],nums[i],nums[j]});
                    
                    i++;
                    continue;
                }
                
                if (nums[i] + nums[j] > target) {
                    j--;
                    continue;
                }

                i++;
                continue;

            }

        }



        return res;
        
    }
};


int main() {
    int num = 3749;

    Solution s;
    auto nums = vector<int>{-1,2,1,-4};
    auto res = s.threeSumClosest(nums,1);
    cout<<res<<endl;
    return 0;
}
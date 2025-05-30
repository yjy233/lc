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
    int threeSumClosest(vector<int>& nums, int target) {
        int l = nums.size();
        if (l<3) return -1;

        sort(nums.begin(),nums.end());

        int res = abs(nums[0]+nums[1]+nums[2]-target);
        int tsum = nums[0] + nums[1] + nums[2];


        for (int s=0;s<l-2;s++) {
            if (s>0 && nums[s] == nums[s-1]) continue;


            int i = s+1;
            int j = l-1;

            int nt = target-nums[s];


            while(i < j) {
                if (i>s+1 && nums[i] == nums[i-1]) {i++;continue;}
                if (j<l-1 && nums[j] == nums[j+1]) {j--;continue;}
                
                if (nums[i] + nums[j] == nt) return target;

                if (abs(nt - nums[i] - nums[j]) < res){
                    res = min(res, abs(nt - nums[i] - nums[j]));
                    tsum = nums[s] + nums[i] + nums[j];
                }
                

                if (nums[i] + nums[i] > nt || nums[j] + nums[j] < nt) break;
                
                if (nums[i] + nums[j] > nt) {
                    j--;
                    continue;
                }
                i++;
            }
        }

        return tsum;
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
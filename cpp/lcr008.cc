#include<vector>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = nums.size();
        if (length <= 0) {
            return 0;
        }

        int res = 0;
        int sum = nums[0];
        int st = 0;
        int ed = 0;

        bool over = false;
        while(!over) {
            //cout<<st<<" "<<ed<<" "<<sum<<" "<<res<<endl;
            while (sum < target) {
                if (ed + 1 >= length) {
                    over = true;
                    break;
                }
                sum += nums[ed+1];
                ed++;
            }
            //cout<<st<<" -- "<<ed<<" "<<sum<<" "<<res<<endl;
            while(sum >= target) {
                //cout<<".  ->"<<st<<" "<<ed<<" "<<sum<<" "<<res<<endl;
                if (res == 0 || res > ed-st+1) {
                    res = ed-st+1;
                }

                sum -= nums[st];
                st++;
            }
        }

        return res;
    }
};
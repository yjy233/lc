#include<vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = nums.size();
        if (length <= 0) return 0; 

        int res = -1;
        int st = 0;
        int sum = nums[0];
        int ed = 0;

        

        while(ed < length) {
            while (sum < target) {
                if (ed+1 >= length) {
                    ed++;
                    break;
                }

                sum += nums[ed+1];
                ed++;
            }

            while(sum >= target) {
                if (res == -1 || ed - st+1 < res) {
                    res = ed - st + 1;
                }

                sum -= nums[st];
                st++;
            }
        }
        
        return max(0, res);

    }
};
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()<=0) {
            return nums.size();
        }

        int decrN = 1;
        for (int i=1;i<nums.size();i++) {
            if (nums[i] == nums[i-1]) {
                continue;
            }

            nums[decrN] = nums[i];
            decrN++;
        }
        return decrN;
    }
};

int main(){
    vector<int> nums = {1,1,2,2,2,3};
    Solution s;
    int n = s.removeDuplicates(nums);
    for (auto &e:nums) cout<<e<<" ";
    cout<<endl;

    cout<<n<<endl;
}


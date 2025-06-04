#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size()<=0) return 0;


        int decrN = 0;
        for (int i = 0;i<nums.size();i++) {
            if (nums[i] == val) {
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
    int n = s.removeElement(nums,2);
    for (auto &e:nums) cout<<e<<" ";
    cout<<endl;

    cout<<n<<endl;
}

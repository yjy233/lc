# include<iostream>
# include<string>
# include<vector>
# include<unordered_map>
# include<climits>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) return {};

        sort(nums.begin(),nums.end());
        int l = nums.size();

        vector<vector<int>> res;

        for (int i = 0;i<=l-4;i++){

            if (i>0&& nums[i] == nums[i-1]) {continue;}
            if (nums[i] > target/4) continue;

            for (int j=i+1;j<=l-3;j++) {
                if (j > i+1 && nums[j-1] == nums[j]) continue;

                if (nums[j] > (target - nums[i])/3) continue; // 这里非常重要的剪枝
                int s = j+1;
                int t = l-1;
                

               long long int tmpTarget = 1ll*target - nums[i] - nums[j]; // 这里比较重要，可能会溢出所以转 long long int
                while(s<t) {
                    if (s>j+1 && nums[s-1] == nums[s]) {s++;continue;}
                    if (t < l-1 && nums[t] == nums[t+1] ) {t--;continue;}

                    if (nums[s] > tmpTarget/2 || nums[t] < tmpTarget/2) break;


                    if (nums[s] + nums[t] == tmpTarget) {

                        vector<int> r = {nums[i],nums[j],nums[s],nums[t]};

                        res.push_back(r);
                        s++;
                        continue;
                    }

                    if (nums[s] + nums[t] > tmpTarget) {
                        t--;
                        continue;
                    }

                    s++;
                }
            }
        }

        return res;
    }
};


int main(){

}
# include <vector>
# include <iostream>

using namespace std;


class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int l = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<vector<int>> tmp;

        res.reserve(1 << l);
        tmp.reserve(1 << l);

        res.emplace_back(vector<int>{});

        for( int i = 0; i < l;i++) {
            for(int j = 0;j<res.size();j++){
                
                bool skip = false;
                if (i>0 && nums[i] == nums[i-1]) {
                    skip = (res[j].empty() || res[j].back() != i-1);
                }

                if (!skip) {
                    vector<int> ntmp(res[j].begin(), res[j].end());
                    ntmp.emplace_back(i);
                    tmp.emplace_back(move(ntmp));
                }
                tmp.push_back(move(res[j]));
            }


            swap(res, tmp);
            tmp.clear();
            //cout<<"p-----"<<tmp.size()<<endl;
        }

        for (int i = 0;i<res.size();i++){
            for (int j = 0; j < res[i].size();j++) {
                res[i][j] = nums[res[i][j]];
            }
        }
        return res;
    }
};


int main(){
    Solution sol = Solution();

    vector<int> nums = {1,2,2};
    auto res = sol.subsetsWithDup(nums);
    for (auto s: res) {
        for (auto j: s) {
            cout<<" "<<j;
        }
        cout<<endl;
    }
}
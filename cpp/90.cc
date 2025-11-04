#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> res;
        vector<vector<int>> tmp;
        int l = nums.size();

        tmp.reserve(max(10, 1<< l));
        res.reserve(max(10, 1 << l));

        res.push_back({});


        for (int i = 0;i<l;i++) {

            for (auto& item:res) {
                tmp.push_back(item);

                if (i > 0 && nums[i-1] == nums[i]) {
                    if (item.size() == 0 || item.back() != i-1) {
                        continue;
                    }
                }

                vector<int> newItem(item.begin(), item.end());
                newItem.push_back(i);

                tmp.push_back(newItem);
            }

            swap(res, tmp);
            tmp.clear();
        }


        vector<vector<int>> realRes;
        //cout<<res.size()<<endl;
        realRes.reserve(res.size());

        for (auto& item: res){
            vector<int> nn(item.size(),0);
            for (int i = 0;i<item.size();i++) nn[i] = nums[item[i]];
            realRes.push_back(nn);
        }
        return realRes;
    }
};
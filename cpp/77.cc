#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<vector<int>> tmp;
        res.reserve(1<<k);
        tmp.reserve(1<<k);

        res.push_back({});

        for (int c = 0;c<k;c++) {
            for (auto& e:res) {
                int idx = e.empty()?0:e.back();
                
                for (int i = idx+1;i<=n;i++){
                    vector<int> newE(e.begin(),e.end());
                    newE.push_back(i);
                    tmp.push_back(newE);
                }
            }

            swap(tmp,res);
            tmp.clear();
        }
        return res;
    }
};
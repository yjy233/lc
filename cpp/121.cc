#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        if (prices.size() <= 1) {
            return res;
        }

        int cost = prices[0];
        for (int i = 1;i<prices.size();i++){
            
            res = max(res, prices[i] - cost);
            cost = min(cost, prices[i]);


            //cout << cost << " "<<res<<endl;

        }
        return res;
    }
};
#include<vector>

using namespace std;

class Solution {
public:
    int getKthMagicNumber(int k) {
        vector<int> dp = {1};
        if (k <= 1) return 1;


        int idx3 = 0;
        int idx5 = 0;
        int idx7 = 0;

        while(dp.size() < k) {
            int nxtVal = min(dp[idx3]*3, dp[idx5]*5);
            nxtVal = min(nxtVal, dp[idx7]*7);


            if (nxtVal == dp[idx3]*3) {
                idx3++;
            } else if (nxtVal == dp[idx5]*5) {
                idx5++;
            }else {
                idx7++;
            }

            if (nxtVal > dp.back()) {
                dp.push_back(nxtVal);
            } 
        }

        //for (auto& e:dp) cout<<","<<e;
        return dp[k-1];
    }
};
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        if (s == "" && (p == "******" || p == "*")) return true;
        int l1 = s.size();
        int l2 = p.size();

        vector<vector<bool>> dp(l1+1, vector<bool>(l2+1, false));

        dp[0][0] = true;


        for (int i = 0;i<l1;i++) {
            for (int j = 0;j< l2;j++) {
                if (s[i] == p[j] || p[j] == '?') {
                    dp[i+1][j+1] = dp[i][j];
                    continue;
                }

                if (p[j] != '*') continue;

                // 
                if (dp[i+1][j]) {
                    dp[i+1][j+1] = true;
                }

                if (dp[i][j+1]) {
                    dp[i+1][j+1] = true;
                }

                if (dp[i][j]) {
                    dp[i+1][j+1] = true;
                    dp[i][j+1] = true;
                }
            
            }
        }

        /*
        for (auto& nn:dp) {
           for (int i = 0;i<nn.size();i++) {
                cout<<nn[i]<<" ";
           }
           cout<<endl;
        }*/

        return dp[l1][l2];
    }
};
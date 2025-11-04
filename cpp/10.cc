#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int l1 = s.size();
        int l2 = p.size();


        vector<vector<bool>> dp(l1+1, vector<bool>(l2+1, false));
        dp[0][0] = true;

        for (int i=0;i<l1;i++) {
            for (int j = 0;j<l2;j++) {
                if (dp[i+1][j+1]) continue;

                if (s[i] == p[j] || p[j] == '.') {
                    dp[i+1][j+1] = dp[i][j];
                    continue;
                }

                if (p[j] != '*') continue;

                if (j == 1) {
                    dp[0][j+1] = true;
                }

                for (int k = 0;k<=l1;k++) {
                    if (dp[k][j-1]) dp[k][j+1] = true;
                }

                char c = p[j-1];
                if (c != '.') {
                    for (int k = 0;k<=l1;k++) {
                        if (dp[k][j-1] || dp[k][j]) {
                            //cout<<k<<" gggg"<<endl;
                            for (int z = k;z<l1;z++) {
                                if (s[z] == c) {
                                    dp[z+1][j+1] = true;
                                    continue;
                                }
                                break;
                            }
                        }
                    }

                    continue;
                }

                for (int k = 0;k<=l1;k++) {
                    if (dp[k][j-1]) {
                        for (int z = k;z<=l1;z++) {
                           dp[z][j+1] = true; 
                        }
                    }
                }
            }
        }

        //for (auto&e :dp) {
        //    for (int i=0;i<e.size();i++) cout<<e[i]<<" ";
        //    cout<<endl;
        //}
        return dp[l1][l2];
    }   
};
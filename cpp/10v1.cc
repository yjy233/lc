#include "vector"

using namespace std;

class Solution {
  public:
    bool isMatch(string s, string p) {

        int ls = s.size();
        int lp = p.size();

        vector<vector<bool>> dp(ls + 1, vector<bool>(lp + 1, false));

        dp[0][0] = true;

        for (int i = 1; i <= ls; i++) {
            for (int j = 1; j <= lp; j++) {
                if (dp[i][j]) continue;

                if (s[i - 1] == p[j - 1] || p[j - 1] == '.') {
                    dp[i][j] = dp[i - 1][j - 1];
                    continue;
                }

                if (j <= 1 || p[j - 1] != '*') {
                    continue;
                }

                for (int k = 0; k <= ls; k++) {
                    if (dp[k][j - 2]) dp[k][j] = true;
                }

                char c = p[j - 2];
                if (c == '.') {
                    for (int k = 0; k <= ls; k++) {
                        if (dp[k][j - 2]) {
                            for (int v = k; v <= ls; v++) {
                                dp[v][j] = true;
                            }
                        }
                    }
                } else {
                    for (int k = 0; k < ls; k++) {
                        if (dp[k][j - 2]) {
                            for (int v = k + 1; v <= ls; v++) {
                                if (s[v - 1] == c) {
                                    dp[v][j] = true;
                                } else {
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }

        // for (auto &e:dp) {
        //     for (auto v: e) {
        //         cout<<v<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[ls][lp];
    }
};
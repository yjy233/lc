#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    bool isMatch(string s, string p) {
        int m  = s.size();
        int n = p.size();

        vector<vector<bool>> dp(m+1,vector<bool>(n+1,false));
        dp[0][0] = true;

		for (int i=1; i<=m; i++) {
			for (int j=1; j<=n; j++) {
				if (s[i-1] == p[j-1] || p[j-1] == '.') {
                    dp[i][j] = dp[i-1][j-1];
                    continue;
                }
                
                if (j < 2 || p[j-1] != '*') continue;
                char c = p[j-2];

                if (dp[i][j-2]) dp[i][j] = true;
                if (dp[i-1][j-2]) dp[i-1][j] = true;

                if (j == 2) {
                    dp[0][2] = true;
                }

                if (c != '.') {
                    if ((j == 2 && i==1) || dp[i-1][j-2]) {
                        //cout<<"join "<<char(c)<<" "<<endl;
                        for (int k = i;k<=m;k++){
                        //    cout<<"ok "<<k-1<<" "<<s[k-1]<<endl;
                            if (s[k-1] != c) {
                                break;
                            }
                            dp[k][j] = true;
                        }
                    }

                    continue;
                }

                if (j == 2) {
                    for (int k = 0;k<=m;k++) {
                        dp[k][j] = true;
                    }
                    continue;
                }

                if (!dp[i-1][j-2]){
                    continue;
                }

                for (int k = i-1;k<=m;k++){
                    dp[k][j] = true;
                }
                
			}
		}

        //for (auto i:dp) {
        //    for (auto j:i) {
        //        cout<<int(j)<<" ";
        //    }
        //    cout<<endl;
        //}

        return dp[m][n];
    }
};

int main() {
    Solution ss;
    string s = "aa";
    string p = "a";
    cout<<ss.isMatch(s,p)<<endl;
}
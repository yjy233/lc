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


        for (int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if (s[i] == p[j] || p[j] == '.') {
                    if (dp[i][j]) {dp[i+1][j+1] = true;continue;}
                }

                if (p[j] != '*' || j <= 0) continue;
                for (int k=0;k<=m;k++) {
                    if (dp[k][j-1]) dp[k][j+1] = true;
                }

                char c = p[j-1];
                if (dp[i][j-1] == false) continue;

                for (int k = i;k<m;k++) {
                    if (c == '.' || s[k] == c) dp[k+1][j+1] = true;
                    else break;
                }
            }

        }

        return dp[m][n];
    }
};

int main() {
    Solution ss;
    string s = "aa";
    string p = "a";
    cout<<ss.isMatch(s,p)<<endl;
}
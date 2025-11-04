#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        
        int l1 = s1.size();
        int l2 = s2.size();

        vector<vector<bool>> dp(l1+1, vector<bool>(l2+1, false));

        dp[0][0] = true;

        for (int l = 0;l<l1+l2;l++){

            for (int i = 0;i<=l;i++) {
                if (dp[i][l-i]) {
                    if (i < l1 && s3[l] == s1[i]) {
                        dp[i+1][l-i] = true;
                    }
                    if (l-i < l2 && s3[l] == s2[l-i]) {
                        dp[i][l-i+1] = true;
                    }
                }
            }
        }

        for (int i = 0;i<=l1+l2;i++) {
            if (dp[i][l1+l2-i]) return true;
        }
        return false;
    }
};
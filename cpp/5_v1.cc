#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int length = s.size();


        vector<vector<bool>> dp(length, vector<bool> (length, false));

        for (int i = 0;i<length;i++) dp[i][i] = true;

        for (int i=0;i<length-1;i++) {
            if (s[i] == s[i+1]) dp[i][i+1] = true;
        }

        for (int l=3;l<=length;l++) {
            // 0 2 3
            for (int i = 0;i+l-1<length;i++) {
                if (s[i] == s[i+l-1] && dp[i+1][i+l-2]) {
                    dp[i][i+l-1] = true;
                } 
            }
        }

        int res = 0;
        string realRes = "";
        for (int i = 0;i<length;i++) {
            for (int j = i;j<length;j++) {
                if (dp[i][j] && j-i+1 > res ) {
                    res = max(res, j-i+1);
                    realRes = string(s.begin()+i, s.begin()+j+1);
                }
            }
        }
        return realRes;
    }
};
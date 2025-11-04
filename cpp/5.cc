#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int l = s.size();
        if (l == 1) {
            return s;
        }   

        vector<vector<bool>> dp(l, vector<bool>(l,false));
        
        for (int i = 0;i<l;i++) dp[i][i] = true;
        for (int i = 1;i<l;i++) {
            if (s[i-1] == s[i]) dp[i-1][i] = true;
        }

        
        for (int w = 3;w<=l;w++) {
            for (int i = 0;i+w-1<l;i++) {        
                dp[i][i+w-1] = (s[i] == s[i+w-1] && dp[i+1][i+w-2]);
            }
        }

        for (int w = l;w>=1;w--) {
            for (int i=0;i+w-1<l;i++) {
                if (dp[i][i+w-1]) return string(s.begin()+i, s.begin()+i+w);
            }
        }

        return "";
    }
};
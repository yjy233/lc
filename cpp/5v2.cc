#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Solution {
  public:
    string longestPalindrome(string s) {

        int l = s.size();
        if (!l) {
            return "";
        }
        vector<vector<bool>> dp(l, vector<bool>(l, false));

        int left = 0;
        int r = 0;
        for (int i = 0; i < l; i++)
            dp[i][i] = true;

        for (int i = 0; i + 1 < l; i++) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                left = i;
                r = i + 1;
            }
        }

        for (int le = 3; le <= l; le++) {
            for (int i = 0; i + le - 1 < l; i++) {
                if (s[i] == s[i + le - 1] && dp[i + 1][i + le - 2]) {
                    left = i;
                    r = i + le - 1;
                    dp[i][i + le - 1] = true;
                }
            }
        }
        return string(s.begin() + left, s.begin() + r + 1);
    }
};
#include<string>

#include<vector>

using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int l1 = word1.size()+1;
        int l2 = word2.size()+1;

        vector<vector<int>> dp(l1+1, vector<int>(l2+1,-1));


        dp[0][0] = 0;
        for (int i = 0;i<=l1;i++) dp[i][0] = i;
        for (int i = 0;i<=l2;i++) dp[0][i] = i;

        for (int i = 0;i<l1;i++) {
            for (int j = 0;j<l2;j++) {

                if (dp[i+1][j+1] == -1) {
                    dp[i+1][j+1] = dp[i][j] + 1;
                }

                dp[i+1][j+1] = min(dp[i+1][j+1], dp[i+1][j] + 1);
                dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j+1] + 1);

                if (word1[i] == word2[j]) {
                    dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]);
                }
            }
        }

        return dp[l1][l2];
    }
};
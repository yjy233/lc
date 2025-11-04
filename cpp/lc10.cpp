#include <iostream>

using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        int l0 = s.size();
        int l1 = p.size();


        vector<vector<bool>> dp(l0 + 1, vector<bool>(l1 + 1, false));

        dp[0][0] = true;

        for (int i = 1; i < l0;i++){
            for (int j = 1; j < l1;j++){
               
            }
        }



        
    }
};
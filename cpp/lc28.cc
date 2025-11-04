#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int> dp = finddp(needle);
        int j = 0;
        int i = 0;
        for(int i = 0; i<haystack.size();i++){
            if (haystack[i] == needle[j]) {
                j++;
                if (j >= needle.size()) return i-needle.size()+1;
                continue;
            }

            while(j > 0) {
                j = dp[j];
                if (haystack[i] == needle[j]) {
                    j++;
                    break;
                }
            }
        }
        return -1;
    }

    vector<int> finddp(string s) {
        int len = s.size();
        vector<int> dp(len,0);

        //int i = 0;
        int j = 0;

        for (int i = 1;i<len;i++) {
            dp[i] = j;

            if (s[i] == s[j]) {
                j++;
                continue;
            }

            while(j > 0 && s[j] != s[i]) {
                j = dp[j];
            }

            if (j > 0 || s[j] == s[i]) j++;
        }
        
        return dp;
    } 
};

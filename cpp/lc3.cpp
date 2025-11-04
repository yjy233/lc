//
// Created by bill on 2025/9/26.
//

#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        if (len <= 1) {
            return len;
        }
        unordered_map<char,bool> c2Cnt;

        int l = 0;
        int r = 0;
        int res = 1;
        c2Cnt[s[0]] = 1;
        while (r < len){
            if (l>r) {
                c2Cnt[s[r]]+=1;
                if (r-l+1 >= res) {
                    res = max(res,r-l+1);
                }
                r++;
            }

        }
        
        return res;
    }
};
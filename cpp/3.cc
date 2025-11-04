#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.size();
        if (length<=1) {
            return length;
        }

        unordered_map<char,int> c2Cnt;
        
        int pre = 0;
        int res = 1;
        c2Cnt[s[0]] = 1;

        for (int i = 1;i<length;i++) {
            while (c2Cnt[s[i]]){
                c2Cnt[s[pre]]-=1;
                pre++;
            }
                
            c2Cnt[s[i]]+=1;
            res = max(res,i-pre+1);
        }

        return res;
    }
};
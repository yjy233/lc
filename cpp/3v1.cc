#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mem;
        if (s == "") {
            return 0;
        }
        int l = 0;
        int r = 0;

        int st = 0;
        int ed = 0;
        mem[s[0]] = 1;

        while (ed + 1 < s.size()) {
            // cout<<st<<"|"<<ed<<" "<<l<<"|"<<r<<endl;
            while (ed + 1 < s.size()) {
                ed++;
                mem[s[ed]] += 1;
                if (mem[s[ed]] <= 1) {
                    if (ed - st > r - l) {
                        l = st;
                        r = ed;
                    }
                    continue;
                }
                break;
            }

            while (st < ed && mem[s[ed]] > 1) {
                mem[s[st]] -= 1;
                st++;
            }
        }

        return r - l + 1;
    }
};
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool jude(unordered_map<char,int>& mem, unordered_map<char,int>& tmp) {
        for (auto r: mem) {
            char c = r.first;
            int cnt = r.second;

            if (tmp[c] < cnt) {
                return false;
            }
        }
        
        return true;
    }
    string minWindow(string s, string t) {
        
        unordered_map<char,int> mem;
        for (auto& c:t) {
            mem[c] += 1;
        }

        unordered_map<char,int> memC;
        int st = 0;
        int ed = 0;
        memC[s[0]] = 1;


        while(ed < s.size()) {
            while (!jude(mem, memC)) {
                
            }
        }


    }
};
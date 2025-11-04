#include <vector>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int wn = words.size();

        // abcbcdabc
        // abc 
        // bcd

        int wl = words[0].size();
        if (s.size() < wl*wn) return {};

        vector<int> res;

        vector<unordered_map<string,int>> mem;

        unordered_map<string,int> rM;
        for (auto& word:words) {
            rM[word]+=1;
        }

        auto isOK = [rM](unordered_map<string,int>& now) {
            for (auto& kv:rM) {
                string key = kv.first;
                int val = kv.second;

                if (now[key] < val) {
                    return false;
                }
            }
            return true;
        };

        for (int i = 0;i<wl;i++) {
            if (i + wl*wn > s.size()) continue;

            unordered_map<string, int> now;
            for (int j = 0;j<wn;j++) {
                string word = string(s.begin()+i+j*wl, s.begin()+i+j*wl+wl);
                
                now[word]+=1;
            }

            if (isOK(now)) {
                res.push_back(i);
            }

            mem.push_back(now);
        }

        for (int i = wl;i<=s.size()-wl*wn;i++) {
            
            int idx = i%wl;
            
            string oldWord = string(s.begin()+i-wl, s.begin()+i);
            mem[idx][oldWord] -= 1;

            string newWord = string(s.begin()+i+wl*wn-wl, s.begin()+i+wl*wn);
            mem[idx][newWord] += 1;
            
             if (isOK(mem[idx])) {
                res.push_back(i);
            }
        }

        return res;
    }
};
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    static unordered_map<char,int> c2i;
    int romanToInt(string s) {
        int res = 0;


        for (int i = 0;i<s.size();i++){
            int c = c2i[s[i]];
            int nc = 0;

            if (i+1<s.size()) nc = c2i[s[i+1]];

            if (nc > c) res -= c;
            else res += c;
        }

        return res;
    }
};
unordered_map<char,int> Solution::c2i = {
   {'I',1},
   {'V',5},
   {'X',10},
   {'L',50},
   {'C',100},
   {'D',500},
   {'M',1000}
};


int main() {
    int num = 3749;

    Solution s;
    cout<<s.romanToInt("MCMXCIV")<<endl;
    return 0;
}
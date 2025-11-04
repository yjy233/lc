#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iostream>
#include <unordered_set>


using namespace std;

class Solution {
public:
    string shortestPalindrome(string s) {
        string rs = string(s.rbegin(),s.rend());
        cout<<rs<<endl;

        unordered_set<string> us;

        for (int i = 1;i<=s.size();i++) {
           us.insert(s.substr(0,i));
        }
        
        for (int i = 0;i<s.size();i++) {
            if (us.count(rs.substr(i))) {
                return rs.substr(0,i)+s;
            }
        }

    


        return rs.substr(0,rs.size()-1)+s;
    }
};


int main(){
    Solution s;
    cout<<s.shortestPalindrome("aacecaaa")<<endl;
    cout<<s.shortestPalindrome("abcd")<<endl;
}
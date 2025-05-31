# include<iostream>
# include<string>
# include<vector>
# include<unordered_map>
using namespace std;


/*
    比较简单，就是循环append
*/
class Solution {
public:
    static unordered_map<char,vector<char>> c2cs;
    vector<string> letterCombinations(string&  digits) {
        if (digits == "") return {};

        vector<string> tmp = {""};
        for (auto &c:digits) {
            vector<string> rtmp;

            auto cs = c2cs[c];
            if (!cs.size()) continue;
 
            for (auto &pre:tmp) {
                
                for (auto &nc:cs){

                    string ns(pre.begin(),pre.end());
                    ns.push_back(nc);
                    rtmp.push_back(ns);
                }
            }

            tmp = rtmp;
        }
        return tmp;
    }
};

unordered_map<char,vector<char>> Solution::c2cs = {
    {'1',{}},
    {'2',{'a','b','c'}},
    {'3',{'d','e','f'}},
    {'4',{'g','h','i'}},
    {'5',{'j','k','l'}},
    {'6',{'m','n','o'}},
    {'7',{'p','q','r','s'}},
    {'8',{'t','u','v'}},
    {'9',{'w','x','y','z'}},
    {'0',{}}
};


int main(){

}
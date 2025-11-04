#include<string>
#include<vector>
#include<unordered_set>
using namespace std;


class Solution {
public:
   bool wordPattern(string pattern, string s) {
        
        
        vector<string> words = split(s);
        //for (auto &w:words) {
        //    cout<<w<<endl;
        //}
        if (words.size() != pattern.size()){
            return false;
        }
        //cout<<"e1"<<endl;

        vector<string> wordTable(26);
        unordered_set<string> wordSet;
            
        for (int i = 0;i<pattern.size();i++){
            int idx = pattern[i] - 'a';

            if (wordTable[idx].size() == 0) {
                if (wordSet.find(words[i])!=wordSet.end()) {
                    return false ;
                }

                wordTable[idx] = words[i];
                wordSet.insert(words[i]);
                continue;
            }
            
            if (wordTable[idx] != words[i]) {
                return false;
            }
        }


        return true;
    }


    vector<string> split(string s){

        vector<string> res;
        res.reserve(10);

        int pre = 0;
        for (int i=0;i<s.size();i++){
            if (s[i] == ' '){
                if (i > pre){
                    res.emplace_back(s.substr(pre,i-pre));
                }
                pre = i+1;
            }
        }

        if (pre < s.size()){
            res.emplace_back(s.substr(pre,s.size()-pre));
        }
        return res;
    }    

};
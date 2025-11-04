#include<iostream>
#include<unordered_map>
#include<string>


using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        vector<int> res;
        int wn = words.size();

        unordered_map<string,int> rn;
        for (auto &w:words) {
            rn[w] += 1;
        }

        int wd = words[0].size();
    
        int dl = s.size()%wd + 1;
        vector<unordered_map<string,int>> dp;

        auto complete = [&rn](const unordered_map<string,int>& tmp){
            for (auto &p:rn){
                auto tp = tmp.find(p.first);
                if (tp == tmp.end() || tp->second < p.second) return false;
            }

            cout<<"xfwefwefw"<<endl;
            return true;
        };


        cout<<"ggggggg "<<dl<<endl;
        for (int i=0;i<=dl;i++) {
            unordered_map<string,int> um;

            int st = i;
            for (int j=0;j<wn;j++) {
                int nst = st + wd;
                string term(s.begin()+st,s.begin()+nst);
                um[term] += 1;
                st = nst;
            }

            dp.push_back(std::move(um));

            for (auto &p:um) {
                cout<<p.first<<" "<<p.second<<"  ||  ";
            }
            cout<<endl;

            if (complete(um)) {
                res.push_back(i);
            }
        }



        for (int i=wn*wd;i<s.size()-wd;i++) {
            int ind = i%wd;

            unordered_map<string,int>& um = dp[ind];
            
            string oldTerm(s.begin()+i-wn*wd,s.begin()+i+wd-wn*wd);
            //string newTerm = "";
            string newTerm(s.begin()+i,s.begin()+i+wd);

            cout<<"Mm,mmmmwfwe"<<endl;
            cout<<oldTerm<<" "<<newTerm<<endl;
            cout<<um.size()<<endl;
            
            for (auto &t:um) cout<<t.first<<":"<<t.second<<" ||| ";
            //cout<<endl;
            //cout<<oldTerm<<endl;



            if (um.find(oldTerm) == um.end()) {
                um[oldTerm] = 0;
            } else {
                um[oldTerm] = max(0,um[oldTerm] - 1);
            }

            um[newTerm] += 1;

            if (complete(um)) {
                res.push_back(i-wn*wd+wn);
            }

        }
        for (auto &p:rn) {
            cout<<p.first<<" "<<p.second<<"  ||  ";
        }
        cout<<endl;

        return res;
    }
};

int main(){

    Solution s;

    string ss= "barfoothefoobarman";
    vector<string> terms = {"foo","bar"};
    auto r = s.findSubstring(ss,terms);
    for (auto &t:r) cout<<t<<" ";
    cout<<endl;
    return 0;
}
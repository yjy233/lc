#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    string decodeString(string s) {

        stack<string> st;

        int pre = -1;

        for (int i = 0;i<s.size();i++) {
            // 数字
            if (s[i] >= '0' && s[i] <= '9') {
                if (pre == -1) {
                    pre = i;
                } 
                continue;
            }            

            if (pre != -1) {
                st.push(string(s.begin() + pre, s.begin()+i));
                pre = -1;
            }

            if (s[i] == ']') {
                string r = "";

                //cout<<"ccc "<<st.top()<<endl;
                while(!st.empty() && st.top() != "[") {
                    r = st.top() + r;
                    st.pop();
                }
                //cout<<"gggg.  "<<r<<endl;
                st.pop();
                
                if (!st.empty()) {
                    int n = atoi(st.top().c_str());

                    //if (n >= 0) {
                    st.pop();
                    //}
                    string tmpR = "";
                    for (int i = 0;i<n;i++) tmpR += r;
                    r = tmpR;
                }
                //cout<<"||| "<<r<<endl;
                st.push(r);
                continue;
            }

            //cout<<string(s.begin()+i, s.begin()+i+1)<<endl;
            st.push(string(s.begin()+i, s.begin()+i+1));
        }

        if (st.empty()) return "";

        string reals = "";
        while(!st.empty()) {
            reals = st.top() + reals;
            st.pop();
        }
        return reals;
    }   
};
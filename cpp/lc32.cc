#include<iostream>
#include<stack>
using namespace std;


class Solution {
public:
    int longestValidParentheses(string s) {
        
        int l = s.size();

        vector<int> dp(l,0);


        stack<int> st;


        for(int i = 0;i<l;i++) {
            char c = s[i];

            if (c == '(') {
                st.push(i);
                continue;
            }

            if (st.empty()) {
                continue;
            }

            int left = st.top();
            st.pop();
            dp[i] = i - left+1;
            if (left > 0) dp[i] += dp[left-1];
        }

        int res = 0;
        for (auto &e:dp) res = max(res, e);
        return res;
    }
};
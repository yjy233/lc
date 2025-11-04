#include<vector>
#include<iostream>
#include<stack>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;

        int res = 0;

        for (int i = 0;i<height.size();i++){
            while(!st.empty() && height[st.top()] < height[i]) {
                int bottomIdx = height[st.top()];
                st.pop();

                if (st.empty()) {
                    break;
                }
                // 0 1 2 
                int left = st.top();
                int w = max(0, i - left-1);

            }

            st.push(i);
        }
    }
};
#include <iostream>


using namespace std;


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int l = heights.size();

        vector<int> left(l, 0);
        vector<int> right(l, 0);

        stack<int> st;

        for (int i = 0;i<l;i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                // 5 4 2
                left[st.top()] = max(0,i - st.top()-1);

                st.pop();
            }

            st.push(i);
        }

        while(!st.empty()) {
            left[st.top()] = l - st.top() - 1;
            st.pop();
        }

        for (int i = l-1;i>=0;i--) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                // 5 4 2
                right[st.top()] = max(0,abs(i - st.top()-1));
                st.pop();
            }

            st.push(i);
        }

        while(!st.empty()) {
            // 1 2 3
            right[st.top()] = st.top();
            st.pop();
        }


        int res = 0;
        for (int i = 0;i<l;i++) {
            res = max(res,(left[i] + 1 + right[i])*heights[i]);
        }
        return res;
    }
};
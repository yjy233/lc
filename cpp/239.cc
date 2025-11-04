#include<vector>
#include<list>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        list<int> st;

        for (int i = 0;i<k-1;i++) {
            while (st.size() != 0 && nums[i] >= nums[st.back()]) {
                st.pop_back();
            }

            st.push_back(i);
        }

        vector<int> res;
        res.reserve(nums.size()-k+1);

        for (int i = k-1;i<nums.size();i++) {
            while (st.size() != 0 && nums[i] >= nums[st.back()]) {
                st.pop_back();
            }

            // 0 1 
            // 1
            while (st.size() != 0 && st.front() <= i - k) {
                st.pop_front();
            }

            st.push_back(i);

            res.push_back(nums[st.front()]);
        }

        return res;
    }
};
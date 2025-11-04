#include<vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int l = 0;
        int r= height.size()-1;

        while(r > l) {
            int w = r-l;
            int h = min(height[l], height[r]);

            res = max(res, w*h);

            if (height[l] < height[r]) {
                l++;
                continue;
            }
            r--;
        }
        return res;
    }
};
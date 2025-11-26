#include <vector>

using namespace std;
class Solution {
  public:
    int maxArea(vector<int> &height) {

        int res = 0;

        int r = height.size() - 1;
        int l = 0;

        while (r > l) {
            res = max((r - l) * min(height[l], height[r]), res);
            if (height[l] < height[r]) {
                l++;
                continue;
            }
            r--;
        }
        return res;
    }
};
#include <vector>

using namespace std;

/*
    双指针，两端中比较矮的那一端移动
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;

        int res = 0;
        while(i<j){
            res = max(res,min(height[i],height[j])*(j-i));


            if (height[i] > height[j]) {
                j--;
                continue;
            }
            i++;
        }

        return res;
    }
};
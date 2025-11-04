#include<vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size();
        int l2 = nums2.size();

        if ((l1 + l2)%2 == 1){
            return helper(nums1,nums2,(l1 + l2)/2);
        }
        
        double f1 = helper(nums1,nums2,(l1 + l2)/2-1);
        double f2 = helper(nums1,nums2,(l1 + l2)/2);
        return (f1+f2)/2;
    }

    double helper(vector<int>& nums1, vector<int>& nums2,int idx) {
        int l1 = nums1.size();
        int l2 = nums2.size();

        if (l1 == 0) return nums2[idx];
        if (l2 == 0) return nums1[idx];

        if (idx == 0) return min(nums1[0], nums2[0]);

        if (idx == 1) {
            vector<int> tmp;
            tmp.reserve(4);
            tmp.push_back(nums1[0]);
            tmp.push_back(nums2[0]);
            if (l1 > 1) {
                 tmp.push_back(nums1[1]);
            }
            if (l2 > 1) {
                 tmp.push_back(nums2[1]);
            }
            sort(tmp.begin(),tmp.end());
            return tmp[1];
        }

        int newIdx = min((idx-1)/2,(l1-1)/2);
        newIdx = min(newIdx, (l2-1)/2);
        newIdx = max(0, newIdx);

        if (nums1[newIdx] < nums2[newIdx]) {
            newIdx = max(newIdx,1);
            vector<int> newNums1 = vector<int>(nums1.begin()+newIdx, nums1.end());
            return helper(newNums1, nums2, idx - newIdx);
        }

        newIdx = max(newIdx,1);
        vector<int> newNums2 = vector<int>(nums2.begin()+newIdx, nums2.end());
        return helper(nums1, newNums2, idx - newIdx);
    }
};
//
// Created by bill on 2025/9/26.
//

#include "lc4.h"
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l = nums1.size() + nums2.size();
        if  (l%2==1) {
            return helper(nums1, nums2, l/2);
        }        

        return (helper(nums1, nums2, l/2) + helper(nums1, nums2, l/2-1))/2.0;

    }

    double helper(vector<int>& nums1, vector<int>& nums2, int ind) {
        int l1 = nums1.size();
        int l2 = nums2.size();

        if (l1 == 0) {
            return nums2[ind];
        }   
        if (l2 == 0) {
            return nums1[ind];
        }

        if (ind == 0) {
            return min(nums1[0], nums2[0]);
        }

        if (ind <= 1) {
            vector<int> tmp;
            tmp.reserve(3);
            tmp.emplace_back(nums1[0]);
            tmp.emplace_back(nums2[0]);

            if (l1 > 1) {
                tmp.emplace_back(nums1[1]);
            }
            if (l2 > 1) {
                tmp.emplace_back(nums2[1]);
            }

            sort(tmp.begin(),tmp.end());
            return tmp[1];
        }

        int newInd = min(l1/2,l2/2);
        if (nums1[newInd] < nums2[newInd]) {
            newInd = max(newInd,1);
            vector<int> newNums1(nums1.begin()+newInd,nums1.end());

            return helper(newNums1, nums2, ind - newInd);
        }

        newInd = max(newInd,1);
        vector<int> newNums2(nums2.begin()+newInd,nums2.end());

        return helper(nums1, newNums2, ind - newInd);
    }
};
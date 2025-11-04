#include<iostream>

using namespace std;


/*
class Solution {
public:
    int firstBadVersion(int n) {
        if (isBadVersion(n)){
            return -1;
        }
        return helper(0, n);
    }

    int helper(int l, int r) {
        if (isBadVersion(l)) {
            return l;
        }

        if (l+1 >= r) {
            return r;
        }

        int mid = (r+l)/2;

        if (isBadVersion(mid)) {
            return helper(l, mid);
        }
        return helper(mid,r);
    }
};*/
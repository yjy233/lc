#include<iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 1) return n == 1;
        while(n>0){
            if (n&1) {
                return n == 1;
            }

            n = n >> 1;
        }

        return true;
    }
};
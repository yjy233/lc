#include<iostream>

using namespace std;
class Solution {
public:
    int findNthDigit(int n) {
        if (n <= 9) return n;

        // 11
        long long int cnt = 9;
        
        long long int w = 10;
        long long int wn = 2;
        while(cnt < n) {
            long long int tmpCnt = w*9*wn;

            if (cnt + tmpCnt >= n) break;
            cnt+=tmpCnt;
            wn++;
            w*=10;
        }
        // wn:2, cnt: 9
        long long int st = 1;
        for (int i = 0;i<wn-1;i++) {
            st*=10;
        }
        st--;

        // 12 9 3
        int rest = n - cnt;

        st += (rest/wn);
        if (rest%wn) st++;
        // st 11 
        string s = to_string(st);
        return s[(rest+wn-1)%wn]-int('0');
        //6*7+
    }
};
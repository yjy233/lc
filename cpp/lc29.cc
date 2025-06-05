#include <iostream>

using namespace std;


/*
     思路就是不断 判断翻倍，但是要注意要都转成负数，避免int 正数溢出

*/
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0 || dividend == 0) return 0;
        if (divisor == 1) return dividend;
        if (divisor == -1) {
            if (dividend == INT_MIN) return INT_MAX;

            return 0 - dividend;
        }

        bool sign = true;
        if ((dividend<0 && divisor >0) || (dividend>0 && divisor<0)) sign = false;

        // 需要都转负数，因为INT_MIN 绝对值比 INT_MAX大1
        if (dividend > 0) dividend = 0 - dividend;
        if (divisor > 0) divisor = 0 - divisor;

        int res = div(dividend,divisor);

        return sign?res:0-res;
    }

    // 输入都是负数
    int div(int dividend, int divisor) {
        if (dividend > divisor) return 0;
        if (dividend == divisor) return 1;

        int count = 1;
        int realD = divisor;
        while(realD >= dividend/2) {
            realD += realD;
            count += count;
        }

        return count + div(dividend-realD,divisor);
    }
};

int main(){
    Solution s;
    cout<<s.divide(10,3)<<endl;
}
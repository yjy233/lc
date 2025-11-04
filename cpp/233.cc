#include<iostream>
#include<string>
#include<stdlib.h>
#include<math.h>

using namespace std;
class Solution {
public:
    int countDigitOne(int n) {
        int res = 0;
        if (n < 10) {
            return n >= 1;
        }

        string str = to_string(n);
        int l = str.size();

        // 222
        // 1 11 21 
        // 3 * 10
        for (int i = l-2;i>0;i--) {
            int right = 1;
            if (i < l-1) {
                right = pow(10, double(l-1-i));
            }

            int left = 0;
            if (i > 0) {
                string leftStr = string(str.begin(), str.begin() + i);
                left = atoi(leftStr.c_str());

                if (str[i] > '1') {
                    left++;
                }
            }

            //cout<<res<<" "<<left<<" "<<right<<endl;
            res += (left*right);

            if (str[i] == '1') {
                string leftStr = string(str.begin()+i+1, str.end());
                left = atoi(leftStr.c_str());
                res+=left;
                res++;
            }
        }


        // 最后
        {
            string leftStr = string(str.begin(), str.end()-1);
            res += atoi(leftStr.c_str());
            if (str.back() >= '1') res++; 
        }


        {   
            if (str[0] == '1') {
                string leftStr = string(str.begin()+1, str.end());
                res += atoi(leftStr.c_str());
                res++;
            } else if(str[0] >= '2') {
                 res += pow(10,str.size()-1);
            }
        }
    
        return res;
    }

};
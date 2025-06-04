#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
    就是经典kmp。首先实现模式串，物理含义是：匹配needle的坐标是 ind=0，如果匹配不了 第i个字符，那么应该调整到 模式串i 的位置。
    但是有个地方要注意就是 如果匹配不上，要判断一下 needle[j] == needle[ind] 如果能匹配上 要 ind++。
*/

class Solution {
public:
    vector<int> getInd(string& needle) {
        int ind = 0;

        vector<int> res = vector<int>(needle.size(),0);

        int j = 1;
        while(j < needle.size()) {
            res[j] = ind;

            if (needle[ind] == needle[j]) {
                j++;
                ind++;
                continue;
            }

            while(ind>0 && needle[j] != needle[ind]) {
                ind = res[ind];
            }
            if (ind>0 || needle[ind] == needle[j]) ind++;
            j++;
        }

        return res;
    }
    int strStr(string haystack, string needle) {


        vector<int>&& nexInd = getInd(needle);

        int ind = 0;
        int j = 0;
        while(ind<haystack.size()) {
            
            if (haystack[ind] == needle[j]) {
                j++;
                if (j >= needle.size()) break;
                ind++;
                continue;
            }

            if (j == 0) {
                ind++;
                continue;
            }

            j = nexInd[j];
            //cout<<j<<endl;
        }
        return j>=needle.size()?ind-needle.size()+1:-1;

        for (auto &&e:nexInd) cout<<e<<" ";
        cout<<endl;

        return -1;    
    }
};

int main(){

    Solution s;
    string haystack = "leetcode";
    string needle = "leeto";
    
    cout<<s.strStr(haystack,needle)<<endl;;
}
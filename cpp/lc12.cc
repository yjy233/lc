#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    static unordered_map<int,char> size2C;
    static vector<int> sizeList;


    string intToRoman(int num) {

        string res = "";
        while(num){
            for (auto s:sizeList) {
                
                if (num < s) {
                    continue;
                }

                int n = num/s;
                char c = size2C[s];
                char c5 = ' ';
                char c10 = ' ';
                if (s != 1000) c5 = size2C[s*5];
                if (s != 1000) c10 = size2C[s*10];

                switch (n)
                {
                case 9:
                    res.push_back(c);
                    res.push_back(c10);
                    num -= 9*s;
                    break;
                case 8:
                    res.push_back(c5);
                    num -= 5*s;
                    break;
                case 7:
                    res.push_back(c5);
                    num -= 5*s;
                    break;
                case 6:
                    res.push_back(c5);
                    num -= 5*s;
                    break;
                case 5:
                    res.push_back(c5);
                    num -= 5*s;
                    break;
                case 4:
                    res.push_back(c);
                    res.push_back(c5);
                    num -= 4*s;
                    break;
                default:
                    res.push_back(c);
                    num -= s;
                    break;
                }

                break;
            }

        }

        return res;
    }
};

unordered_map<int,char> Solution::size2C = unordered_map<int,char>{
    {1,'I'},
    {5, 'V'},
    {10, 'X'},
    {50,'L'},
    {100,'C'},
    {500,'D'},
    {1000,'M'}
};

vector<int> Solution::sizeList = {1000,100,10,1};

int main() {
    int num = 3749;

    Solution s;
    cout<<s.intToRoman(num)<<endl;
    return 0;
}
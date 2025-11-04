#include<vector>
#include<string>

using namespace std;


class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s; 
        vector<vector<char>> res(numRows);

        int row = 0;
        int d = 0;
        for (int i = 0;i<s.size();i++) {
            res[row].push_back(s[i]);

            if (d%2==0) {
                row++;
                if (row < numRows) continue;

                d++;
                row = numRows-2;
                continue;
            }

            row--;
            if (row >= 0) continue;
            row = 1;
            d++; 
        }

        string realRes = "";
        for (auto& e:res) {
            for (auto& c:e) realRes += c;
        }
        return realRes;
    }
};
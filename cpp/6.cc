#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;
        int l = s.size();
        int roundSize = 2*numRows - 2;

        vector<int> rowSize(numRows,0);
        for (int idx=0;idx<numRows;idx++){
            if (idx == 0) {
                int rSize = (l/roundSize);
                if (l%roundSize > 0) rSize++;
                rowSize[0] = rSize;
                continue;
            }

            if (idx == numRows-1) {
                int rSize = (l/roundSize);
                if (l%roundSize >= numRows) rSize++;
                rowSize[numRows-1] = rSize;
                continue;
            } 

            int rSize = 2*(l/roundSize);
            int yu = l%roundSize;
            if (yu > idx) rSize++;

            // A
            // B    F 1 
            // C  E 2 
            // D
            // 3 >= 3
            if (yu - numRows + 1 >= numRows-idx) rSize++;
            rowSize[idx] = rSize;
        }

        //for (auto e:rowSize) cout<<e<<" ";
        //cout<<endl;



        vector<char> res(s.size());

        for (int i = 0;i<s.size();i++) {

            int numRound = i/roundSize;
            int line = (i%roundSize);
            // A
            // B    F
            // C  E
            // D
            if (line >= numRows) {
                //  3 - (5+1-4)
                line = (numRows-1) - (line + 1 - numRows);
            }


            int idx = 0;
            for (int j=0;j<line;j++) idx+=rowSize[j];

            int yu = (i)%roundSize;
            if (line == 0) {
                idx = i/roundSize;
            } else if (yu == numRows-1) {
                idx += i/roundSize;
            } else {
                idx += 2*(i/roundSize);
                if (yu >= numRows ) idx++;
            }

            res[idx] = s[i];
        }

        string realRes = "";
        for (auto& c:res) realRes += c;
        return realRes;
    }
};
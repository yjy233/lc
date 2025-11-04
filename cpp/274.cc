#include<vector>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
    
        vector<int> cntList (citations.size()+1,0);

        for(auto& e:citations) {
            if  (e >= citations.size()) {
                cntList[citations.size()] += 1;
                continue;
            } else if (e <= 0) {
                continue;
            } else {
                cntList[e] +=1;
            }
        }
        
        int tmpCnt = 0;
        for (int i = cntList.size()-1;i>=0;i--) {
            tmpCnt += cntList[i];

            if (tmpCnt >= i) {
                return i;
            }
        }
        return 0;
    }

   
};

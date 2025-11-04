#include<math.h>
#include<unordered_map>

using namespace std;

unordered_map<int,int> memory279;

class Solution {
public:
    int numSquares(int n) {
        if (n<=1) {
            return 1; 
        }

        auto ptr = memory279.find(n);
        if (ptr != memory279.end()) {
            return ptr->second;
        }


        int sqrtN = int(sqrt(n));
        if (sqrtN*sqrtN == n) {
            memory279[n] = 1;
            return 1;
        }

        int res = n;
        for (int i = sqrtN; i >= 1;i--) {
            int s = i*i;
            res = min(res, 1 + numSquares(n - s));
        }

        memory279[n] = res;
        return res;
    }
};
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<int,int> memory;
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) {
            return 0;
        }
        if (amount < 0) return -1; 

        if (memory.find(amount) != memory.end()) {
            return memory[amount];
        }

        int res = -1;
        for (auto &e:coins) {

            int tmp = coinChange(coins, amount - e);
            if (tmp == -1) continue;
            if (res == -1 || res > tmp+1 ) res = tmp+1;
        }


        memory[amount] = res;
        return res;
    }
};
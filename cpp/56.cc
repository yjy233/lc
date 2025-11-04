#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        auto p = [](vector<int>& a, vector<int>&b){
            return a[0] <= b[0];
        };
        sort(intervals.begin(), intervals.end(), p);

        vector<vector<int>> res;


        res.reserve(intervals.size());

        vector<int> tmp = intervals[0];

        int idx = 1;
        while(idx < intervals.size()) {
            if (overlap(intervals[idx], tmp)){
                tmp = merge(intervals[idx], tmp);
                idx++;
                continue;
            }

            res.emplace_back(move(tmp));
            tmp = intervals[idx];
            idx++;
        }
        
        res.emplace_back(move(tmp));
        return res;
    }


    bool overlap(vector<int>& a, vector<int>& b) {
        if (a[0] < b[0]) {
            return a[1] >= b[0];
        }


        return b[1] >= a[0];
    }

    vector<int> merge(vector<int>& a, vector<int>& b) {
        return vector<int>{min(a[0],b[1]), max(a[1],b[1])};
    }
};
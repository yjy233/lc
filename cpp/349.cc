#include<vector>
#include<unordered_set>


using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        res.reserve(nums2.size());


        unordered_set<int> m;
        unordered_set<int> dedup;

        for (auto &e:nums1) {
            m.insert(e);
        }

        for (auto &e:nums2) {
            if (!m.count(e) || dedup.count(e)) continue;

            dedup.insert(e);
            res.push_back(e);   
        }
        return res;
    }
};
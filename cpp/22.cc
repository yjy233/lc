#include <vector>
#include "node.h"
using namespace std;

struct Item{
    int l;
    int r;
    string s;

    Item(int n){
        l=0;
        r=0;
        s.reserve(2*n);
    };

};
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<Item*> res;
        vector<Item*> tmp;
        res.reserve(1<<n);
        tmp.reserve(1<<n);

        res.push_back(new Item(n));

        
        for (int w =0;w<2*n;w++) {
            for (auto& item: res) {
                if (item->r < item->l) {
                    Item* newItem = new Item(n);
                    newItem->r++;
                    newItem->s.push_back(')');

                    tmp.push_back(newItem);
                }

                if (item->l < n) {
                    item->l++;
                    item->s.push_back('(');
                    
                    tmp.push_back(item);
                }
            }

            swap(tmp, res);
            tmp.clear();
        }

        vector<string> rr;
        rr.reserve(res.size());

        for (auto& i:res) {
            rr.emplace_back(i->s);
        }
        return rr;
    }

};
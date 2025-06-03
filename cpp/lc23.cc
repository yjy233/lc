#include <string>
#include <vector>
#include <iostream>
#include "node.h"
#include <algorithm>

using namespace std;



class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if (k <= 0) return nullptr;

        auto res = new ListNode;
        res->next = nullptr;
        auto tmp = res;
            
        auto compareF = [](const ListNode* l0, const ListNode* l1) {
            if (!l0) return false;
            if (!l1) return true;
            return l0->val > l1->val;
        };

        make_heap(lists.begin(),lists.end(),compareF);

        while(k>1) {
            pop_heap(lists.begin(),lists.begin()+k,compareF);
                
            if (lists[k-1]) {
                tmp->next = lists[k-1];
                lists[k-1] = lists[k-1]->next;
                tmp = tmp->next;
                tmp->next = nullptr;
            }

            if (!lists[k-1]) k--;
            push_heap(lists.begin(),lists.begin()+k,compareF);
        }

        if (lists[0]) tmp->next = lists[0];

            
        tmp = res->next;
        delete res;
        return tmp;
    }
};


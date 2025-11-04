#include<vector>
#include "node.h"
using namespace std;

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<ListNode*> heap;
        heap.reserve(lists.size());

        auto compareF = [](ListNode* a, ListNode* b){
            if (a == nullptr) return false;
            if (b == nullptr) return true;
            return a->val > b->val;
        };

        make_heap(lists.begin(), lists.end(), compareF);

        ListNode* res = new ListNode;
        res->next = nullptr;
        ListNode* tmp = res;

        while(lists.size() > 1) {
            pop_heap(lists.begin(), lists.end(),compareF);

            ListNode* node = lists.back();
            lists.pop_back();

            if (node == nullptr) {    
                continue;
            }

            tmp->next = node;
            node = node->next;
            tmp = tmp->next;
            tmp->next = nullptr;

            if (node != nullptr) {
                lists.push_back(node);
                push_heap(lists.begin(),lists.end(), compareF);
            }
        }

        if (lists.size()) {
            tmp->next = lists[0];
        }
        
        return res->next;
    }
};
#include "node.h"
#include<algorithm>

using namespace std;
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        auto sortF = [](ListNode* a, ListNode* b) {
            if (!a) return false;
            if (!b) return true;

            return a->val > b->val;
        };


        ListNode* res = new ListNode;
        res->next = nullptr;
        ListNode* ptr = res;

        make_heap(lists.begin(), lists.end(), sortF);
        while(lists.size()){

            pop_heap(lists.begin(), lists.end(), sortF);
            
            if (lists.back()){
                ptr->next = lists.back();
                lists[lists.size()-1] = lists[lists.size()-1]->next;

                ptr = ptr->next;
                ptr->next = nullptr;
            } 

            if (lists.back()) {
                push_heap(lists.begin(),lists.end(), sortF);
            } else {
                lists.pop_back();
            }

        }
        
        return res->next;
    }
};

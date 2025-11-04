#include <vector>
#include "node.h"

using namespace std;

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<ListNode*> tmp;
        tmp.reserve(lists.size());

        for (auto &e:lists) {
            if (e!=nullptr) tmp.emplace_back(e);
        }

        auto compareF = [](ListNode* a, ListNode* b) {
            if (a == nullptr) return false;
            if (b == nullptr) return true;

            return a->val < b->val;
        };

        make_heap(tmp.begin(), tmp.end(), compareF);
        ListNode* res = new ListNode;
        res->next = nullptr;
        ListNode* ptr = res;

        int l = tmp.size();

        while(l > 1) {
            pop_heap(tmp.begin(), tmp.begin()+l, compareF); 

            ptr->next = tmp[l-1];
            if (tmp[l-1]!=nullptr && tmp[l-1]->next != nullptr){
                tmp[l-1] = tmp[l-1]->next;
            } else {
                l--;
            }

            if (ptr->next != nullptr) {
                ptr = ptr->next;
                ptr->next = nullptr;
            }

            push_heap(tmp.begin(), tmp.begin()+l, compareF);
        }


        ptr->next = tmp[0];

        return res->next;
    }
};

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
        vector<ListNode*> tmp;
        tmp.reserve(k);
        for (auto ptr:lists) {
            if (ptr == nullptr) continue;
            tmp.emplace_back(ptr);
        }

        swap(tmp, lists);
        
        auto f = [](ListNode* i,ListNode* j){
            if (i==nullptr) return false;
            if (j==nullptr) return true;

            return i->val < j->val;
        };
        make_heap(lists.begin(),lists.end(),f);

        auto head = new ListNode;
        head->next = nullptr;

        auto ptr = head;

        while(lists.size() > 1) {

            pop_heap(lists.begin(),lists.end(),f);
            ListNode* item = lists.back();

            ptr->next = item;
            item = item->next;
            ptr = ptr->next;
            ptr->next = nullptr;

            lists.pop_back();
            if (ptr != nullptr) {
                lists.emplace_back(ptr);
                push_heap(lists.begin(),lists.end(),f);
            }

        } 

        ListNode* res = head->next;
        delete(head);
        
        return res;
    }
};


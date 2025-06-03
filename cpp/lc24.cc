#include <string>
#include <vector>
#include <iostream>
#include "node.h"
#include <algorithm>

using namespace std;

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        auto res = new ListNode;
        res->next = nullptr;
        auto tmp = res;


        while(head) {
            if (head->next == nullptr) {
                tmp->next = head;
                break;
            }

            auto nextHead = head->next->next;
            auto one = head;
            auto two = head->next;

            one->next = nullptr;
            two->next = nullptr;

            tmp->next = two;
            tmp = two;
            tmp->next = one;
            tmp = one;

            head = nextHead;

        }

        tmp = res->next;
        delete res;
        return tmp;
    }
};
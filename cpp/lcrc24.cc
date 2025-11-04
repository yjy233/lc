#include "node.h"

using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* p0 = head;
        ListNode* p1 = head->next;

        p0->next = nullptr;

        while(p1) {
            ListNode* p2 = p1->next;

            p1->next = p0;
            p0 = p1;
            p1 = p2;
        }
        return p0;
    }
};
#include "node.h"

using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = new ListNode;
        res->next = head;

        ListNode* slow = res;
        ListNode* quick = res;

        // 0 1 2 3 4 5
        // 0 2.      1 3.  2  4.  3. 5
        while(n--) {
            quick = quick->next;
        }

        while(quick->next) {
            slow = slow->next;
            quick = quick->next;    
        }

        if (slow->next){
            slow->next = slow->next->next;
        }else {
            slow->next = nullptr;
        }
        
        return res->next;
    }
};
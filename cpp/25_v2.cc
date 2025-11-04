#include <vector>
#include "node.h"

using namespace std;
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1) {
            return head;
        }

        ListNode* res = new ListNode;
        res->next = nullptr;

        auto getTail = [res](){
            ListNode* tmp = res;
            while(tmp->next) {
                tmp = tmp->next;
            }
            return tmp;
        };

        ListNode* termHead = head;
        head = head->next;
        if (!head) return head;
        int cnt = 1;

        while(head) {
            cnt++;

            if (cnt%k == 0) {
                ListNode* termTail = head;
                ListNode* nextHead = head->next;
                termTail->next = nullptr;

                ListNode* p1 = termHead->next;
                termHead->next = nullptr;
                while(p1 != termTail) {
                    ListNode* p2 = p1->next;
                    p1->next = termHead;
                    termHead = p1;
                    p1 = p2;
                }
                p1->next = termHead;

                getTail()->next = termTail;

                termHead = nextHead;
                if (!termHead) {
                    break;
                }
                cnt = 1;
                head = termHead->next;
                continue;
            }
            head = head->next;
        }

        getTail()->next = termHead;
        return res->next;
    }
};
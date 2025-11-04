#include<vector>
#include "node.h"
using namespace std;

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k <= 1) {
            return head;
        } 

        ListNode* res = new ListNode;
        res->next = nullptr;

        auto getResTail = [res]() {
            ListNode* tmp = res;
            while(tmp->next) {
                tmp = tmp->next;
            }
            return tmp;
        };

        ListNode* termHead = head;
        head = head->next;
        int cnt = 1;

        while(head != nullptr) {
            cnt++;

            if (cnt%k==0) {
                ListNode* termTail = head;
                ListNode* nextHead = head->next;
                ListNode* p1 = termHead->next;
                termHead->next = nullptr;

                while(p1 != termTail) {
                    auto p2 = p1->next;
                    p1->next = termHead;

                    termHead = p1;
                    p1 = p2;
                }

                termTail->next = termHead;
                getResTail()->next = termTail;

                termHead = nextHead;
                if (termHead) {
                    head = termHead;
                } else {
                    break;
                }

                cnt = 1;
            } 
            head = head->next;
        }


        getResTail()->next = termHead;
        return res->next;
    }
};
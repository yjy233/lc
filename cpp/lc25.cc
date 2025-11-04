#include <string>
#include <vector>
#include <iostream>
#include "node.h"
#include <algorithm>

using namespace std;

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1 || head == nullptr || head->next==nullptr) {
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


        int cnt = 1;
        ListNode* termHead = head;
        head = head->next;
        while(head != nullptr) {
            cnt++;

            if (cnt%k == 0){
                ListNode* nextHead = head->next;

                ListNode* termTail = head;
                ListNode* p1 = termHead->next;
                
                termHead->next = nullptr;
                while(p1 != termTail) {
                    ListNode* p2 = p1->next;
                    
                    p1->next = termHead;
                    termHead = p1;
                    p1 = p2;
                }
                p1->next = termHead;
                getResTail()->next = termTail;

                termHead = nextHead;
                cnt = 1;
                if (!termHead) {
                    break;
                }
                head = termHead->next;

                continue;
            }

            head = head->next;
        }
        getResTail()->next = termHead;
        return res->next;
    }
};
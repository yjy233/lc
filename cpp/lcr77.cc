#include"node.h"

using namespace std;

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        //show(head);
            // 1 2 3
            // 1,2 
        if (head->next->next == nullptr) {
            if (head->val <= head->next->val) return head;
            auto tmp = head->next;
            head->next = nullptr;
            tmp->next = head;

            //cout<<"---"<<endl;;
            //show(tmp);

            return tmp;
        }

        ListNode* res = new ListNode;
        res->next = nullptr;
        
      
        
        // 1。2 3 4    1，2  2，4
        // 1。 2 3 4 5   1,2. 2,4. 3.5

        auto quick = head;
        auto slow = head;

        // 1,2. 2 
        while (quick) {
            quick = quick->next;
            slow = slow->next;

            if (quick == nullptr) {
                break;
            }
            quick = quick->next;
        }


        quick = slow->next;
        slow->next = nullptr;
        
        quick = sortList(quick);
        slow = sortList(head);

        //cout<<"gggg"<<endl;

        auto tmp = res;

        while (quick || slow) {
            if (!quick) {
                tmp->next = slow;
                break;
            }

            if (!slow) {
                tmp->next = quick;
                break;
            }

            if (quick->val < slow->val) {
                tmp->next = quick;
                quick = quick->next;
                tmp = tmp->next;
                tmp->next = nullptr;
                continue;
            }
            tmp->next = slow;
            slow = slow->next;
            tmp = tmp->next;
            tmp->next = nullptr;
        }

        return res->next;
    }
};
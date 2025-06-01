# include<iostream>

using namespace std;


//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


/*
    就是快慢指针，但是有个问题需要注意的就是 要删除head，很容易coredump
*/
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || head->next == nullptr) return nullptr;

        int m = n;

        ListNode* quick = head;
        while(m) {
            quick = quick->next;
            m--;
        }

        ListNode* slow = head;

        while(quick) {
            quick = quick->next;
            slow = slow->next;
        }

        //if (slow != nullptr) cout<<slow->val<<endl;
        quick = head;
        if (slow == head) return head->next; // 这条非常重要，就是head是要删除的情况一定要注意
        while(quick->next!=slow) {
            quick = quick->next;
        }

        if (slow) {
            quick->next = slow->next;
        } else{
            quick->next = nullptr;
        }
        return head;
    }
};
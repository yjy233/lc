#include <string>
#include <vector>
#include <iostream>
#include "node.h"
#include <algorithm>

using namespace std;

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        auto res = new ListNode;
        res->next = nullptr;

        auto getResTail = [&]() {
            auto tmp = res;
            while(tmp->next) tmp=tmp->next;
            return tmp;
        };
        
        if (head == nullptr || head->next == nullptr) return head;

        int cnt = 0;
        
        auto termHead = head;
        ListNode* termTail = nullptr;


        while(head) {
            cnt++;
            if (cnt%k == 0) {
                auto nextHead = head->next;

                termTail = head;
                termTail->next = nullptr;
                auto tmp = termHead->next;
                termHead->next = nullptr;
                while(tmp) {
                    auto nextTmp = tmp->next;
                    tmp->next = termHead;

                    termHead = tmp;
                    tmp = nextTmp;
                }

                getResTail()->next = termTail;

                head = nextHead;
                termHead = head;
                termTail = nullptr;
                continue;
            }

            head = head->next;
        }

        getResTail()->next = termHead;
        return res->next;
    }
};

int main(){

    vector<int> nums = {1,2,3,4,5};
    auto l = buildListNode(nums);

    Solution s;
    auto res = s.reverseKGroup(l,2);
    showList(res);
}
#include "node.h"

#include <iostream>

using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        auto res = new ListNode(INT_MIN);
        auto tmp = res;

        while(list1 || list2) {
            
            auto processNode = list1;

            if (list1 == nullptr) processNode = list2;

            if (list1 && list2) {
                if (list2->val < list1->val)  processNode = list2;
            }

            tmp->next = processNode;
            tmp = tmp->next;

            if (processNode == list1) {
                list1 = list1->next;
            } else{
                list2 = list2->next;
            }   

            tmp->next = nullptr;
            
        }
        tmp = res->next;
        delete res;
        return tmp;
    }  
};

int main() {
    //[1,2,4], l2 = [1,3,4]
    vector<int> n0 = {1,2,4};
     vector<int> n1 = {1,3,4};
    auto l0 = buildListNode(n0);
    showList(l0);

    auto l1 = buildListNode(n1);
    showList(l1);

    Solution s;
    auto l2 = s.mergeTwoLists(l0,l1);
    showList(l2);
    cout<<"xxx"<<endl;
}
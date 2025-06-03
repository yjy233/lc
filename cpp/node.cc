#include "node.h"
#include <iostream>


// 从vector重建list
ListNode* buildListNode(std::vector<int>& nums){   

    auto res = new ListNode(-1);
    auto tmp = res;

    for (auto &n:nums) {
        auto newNode = new ListNode(n);
        
        tmp->next = newNode;
        tmp = tmp->next;
    }

    tmp = res->next;

    delete res;
    return tmp;
};
// 从vector重建list
ListNode* buildListNode(std::vector<int>&& nums){   

    auto res = new ListNode(-1);
    auto tmp = res;

    for (auto &n:nums) {
        auto newNode = new ListNode(n);
        
        tmp->next = newNode;
        tmp = tmp->next;
    }

    tmp = res->next;

    delete res;
    return tmp;
};

// 从vector重建list
ListNode* buildListNode(std::vector<int> nums){  
    auto res = new ListNode(-1);
    auto tmp = res;

    for (auto &n:nums) {
        auto newNode = new ListNode(n);
        
        tmp->next = newNode;
        tmp = tmp->next;
    }

    tmp = res->next;

    delete res;
    return tmp;
}

// showList 打印list
void showList(ListNode* head){
    while(head) {
        std::cout<<head->val<<" ";
        head = head->next;
    }
   
    std::cout<<std::endl;
};

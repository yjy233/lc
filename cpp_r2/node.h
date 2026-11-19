#pragma once

#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
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


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
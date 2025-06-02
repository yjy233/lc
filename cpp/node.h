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
ListNode* buildListNode(std::vector<int>& nums);

// 展示List
void showList(ListNode* head);
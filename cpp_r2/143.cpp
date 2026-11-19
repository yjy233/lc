// 143. 重排链表（中等）
// https://leetcode.cn/problems/reorder-list/
//
// 给定一个单链表 L 的头节点 head ，单链表 L 表示为：
//
// L_0 → L_1 → … → L_n - 1 → L_n
//
// 请将其重新排列后变为：
//
// L_0 → L_n → L_1 → L_n - 1 → L_2 → L_n - 2 → …
//
// 不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。
//
// 示例 1：
//
// 输入：head = [1,2,3,4]
// 输出：[1,4,2,3]
//
// 示例 2：
//
// 输入：head = [1,2,3,4,5]
// 输出：[1,5,2,4,3]
//
// 提示：
//
//   - 链表的长度范围为 [1, 5 * 10^4]
//
//   - 1 <= node.val <= 1000
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,3,4]
// --- case 2 ---
// [1,2,3,4,5]

#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include "node.h"
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

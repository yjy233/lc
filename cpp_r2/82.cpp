// 82. 删除排序链表中的重复元素 II（中等）
// https://leetcode.cn/problems/remove-duplicates-from-sorted-list-ii/
//
// 给定一个 已排序 的链表的头节点 head。
//
// 删除原始链表中所有 重复 数字的节点，只留下 不同 的数字。
//
// 返回 已排序 的链表。
//
// 示例 1：
//
// 输入：head = [1,2,3,3,4,4,5]
// 输出：[1,2,5]
//
// 示例 2：
//
// 输入：head = [1,1,1,2,3]
// 输出：[2,3]
//
// 提示：
//
//   - 链表中节点数目在范围 [0, 300] 内
//
//   - -100 <= Node.val <= 100
//
//   - 题目数据保证链表已经按升序 排列
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,3,3,4,4,5]
// --- case 2 ---
// [1,1,1,2,3]

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
    ListNode* deleteDuplicates(ListNode* head) {
        
    }
};

int main() {
    Solution sol;
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

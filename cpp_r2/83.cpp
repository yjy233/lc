// 83. 删除排序链表中的重复元素（简单）
// https://leetcode.cn/problems/remove-duplicates-from-sorted-list/
//
// 给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 。返回 已排序的链表 。
//
// 示例 1：
//
// 输入：head = [1,1,2]
// 输出：[1,2]
//
// 示例 2：
//
// 输入：head = [1,1,2,3,3]
// 输出：[1,2,3]
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
// [1,1,2]
// --- case 2 ---
// [1,1,2,3,3]

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
#include "test_util.h"
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
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([1,1,2])LC"));
        Solution sol;
        auto res = sol.deleteDuplicates(a0);
        fails += lctest::check(++caseNo, res, R"LC([1,2])LC");
    }
    // case 2
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([1,1,2,3,3])LC"));
        Solution sol;
        auto res = sol.deleteDuplicates(a0);
        fails += lctest::check(++caseNo, res, R"LC([1,2,3])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

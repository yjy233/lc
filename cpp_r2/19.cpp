// 19. 删除链表的倒数第 N 个结点（中等）
// https://leetcode.cn/problems/remove-nth-node-from-end-of-list/
//
// 给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。
//
// 示例 1：
//
// 输入：head = [1,2,3,4,5], n = 2
// 输出：[1,2,3,5]
//
// 示例 2：
//
// 输入：head = [1], n = 1
// 输出：[]
//
// 示例 3：
//
// 输入：head = [1,2], n = 1
// 输出：[1]
//
// 提示：
//
//   - 链表中结点的数目为 sz
//
//   - 1 <= sz <= 30
//
//   - 0 <= Node.val <= 100
//
//   - 1 <= n <= sz
//
// 进阶：你能尝试使用一趟扫描实现吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,3,4,5]
// 2
// --- case 2 ---
// [1]
// 1
// --- case 3 ---
// [1,2]
// 1

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([1,2,3,4,5])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(2)LC"));
        Solution sol;
        auto res = sol.removeNthFromEnd(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([1,2,3,5])LC");
    }
    // case 2
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([1])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.removeNthFromEnd(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([])LC");
    }
    // case 3
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([1,2])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.removeNthFromEnd(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([1])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

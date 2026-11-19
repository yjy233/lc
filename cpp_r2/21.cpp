// 21. 合并两个有序链表（简单）
// https://leetcode.cn/problems/merge-two-sorted-lists/
//
// 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
//
// 示例 1：
//
// 输入：l1 = [1,2,4], l2 = [1,3,4]
// 输出：[1,1,2,3,4,4]
//
// 示例 2：
//
// 输入：l1 = [], l2 = []
// 输出：[]
//
// 示例 3：
//
// 输入：l1 = [], l2 = [0]
// 输出：[0]
//
// 提示：
//
//   - 两个链表的节点数目范围是 [0, 50]
//
//   - -100
//
//   - l1 和 l2 均按 非递减顺序 排列
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,4]
// [1,3,4]
// --- case 2 ---
// []
// []
// --- case 3 ---
// []
// [0]

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([1,2,4])LC"));
        auto a1 = lctest::toList(lctest::parse(R"LC([1,3,4])LC"));
        Solution sol;
        auto res = sol.mergeTwoLists(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([1,1,2,3,4,4])LC");
    }
    // case 2
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([])LC"));
        auto a1 = lctest::toList(lctest::parse(R"LC([])LC"));
        Solution sol;
        auto res = sol.mergeTwoLists(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([])LC");
    }
    // case 3
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([])LC"));
        auto a1 = lctest::toList(lctest::parse(R"LC([0])LC"));
        Solution sol;
        auto res = sol.mergeTwoLists(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([0])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

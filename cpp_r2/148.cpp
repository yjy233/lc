// 148. 排序链表（中等）
// https://leetcode.cn/problems/sort-list/
//
// 给你链表的头结点 head ，请将其按 升序 排列并返回 排序后的链表 。
//
// 示例 1：
//
// 输入：head = [4,2,1,3]
// 输出：[1,2,3,4]
//
// 示例 2：
//
// 输入：head = [-1,5,3,4,0]
// 输出：[-1,0,3,4,5]
//
// 示例 3：
//
// 输入：head = []
// 输出：[]
//
// 提示：
//
//   - 链表中节点的数目在范围 [0, 5 * 10^4] 内
//
//   - -10^5 <= Node.val <= 10^5
//
// 进阶：你可以在 O(n log n) 时间复杂度和常数级空间复杂度下，对链表进行排序吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [4,2,1,3]
// --- case 2 ---
// [-1,5,3,4,0]
// --- case 3 ---
// []

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
    ListNode* sortList(ListNode* head) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([4,2,1,3])LC"));
        Solution sol;
        auto res = sol.sortList(a0);
        fails += lctest::check(++caseNo, res, R"LC([1,2,3,4])LC");
    }
    // case 2
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([-1,5,3,4,0])LC"));
        Solution sol;
        auto res = sol.sortList(a0);
        fails += lctest::check(++caseNo, res, R"LC([-1,0,3,4,5])LC");
    }
    // case 3
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([])LC"));
        Solution sol;
        auto res = sol.sortList(a0);
        fails += lctest::check(++caseNo, res, R"LC([])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

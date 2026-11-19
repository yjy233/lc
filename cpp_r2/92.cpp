// 92. 反转链表 II（中等）
// https://leetcode.cn/problems/reverse-linked-list-ii/
//
// 给你单链表的头指针 head 和两个整数 left 和 right ，其中 left  。请你反转从位置 left 到位置 right 的链表节点，返回 反转后的链表 。
//
// 示例 1：
//
// 输入：head = [1,2,3,4,5], left = 2, right = 4
// 输出：[1,4,3,2,5]
//
// 示例 2：
//
// 输入：head = [5], left = 1, right = 1
// 输出：[5]
//
// 提示：
//
//   - 链表中节点数目为 n
//
//   - 1
//
//   - -500
//
//   - 1
//
// 进阶： 你可以使用一趟扫描完成反转吗？
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,3,4,5]
// 2
// 4
// --- case 2 ---
// [5]
// 1
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([1,2,3,4,5])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(2)LC"));
        auto a2 = lctest::toInt(lctest::parse(R"LC(4)LC"));
        Solution sol;
        auto res = sol.reverseBetween(a0, a1, a2);
        fails += lctest::check(++caseNo, res, R"LC([1,4,3,2,5])LC");
    }
    // case 2
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([5])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        auto a2 = lctest::toInt(lctest::parse(R"LC(1)LC"));
        Solution sol;
        auto res = sol.reverseBetween(a0, a1, a2);
        fails += lctest::check(++caseNo, res, R"LC([5])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

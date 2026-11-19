// 61. 旋转链表（中等）
// https://leetcode.cn/problems/rotate-list/
//
// 给你一个链表的头节点 head ，旋转链表，将链表每个节点向右移动 k 个位置。
//
// 示例 1：
//
// 输入：head = [1,2,3,4,5], k = 2
// 输出：[4,5,1,2,3]
//
// 示例 2：
//
// 输入：head = [0,1,2], k = 4
// 输出：[2,0,1]
//
// 提示：
//
//   - 链表中节点的数目在范围 [0, 500] 内
//
//   - -100 <= Node.val <= 100
//
//   - 0 <= k <= 2 * 10^9
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [1,2,3,4,5]
// 2
// --- case 2 ---
// [0,1,2]
// 4

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
    ListNode* rotateRight(ListNode* head, int k) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([1,2,3,4,5])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(2)LC"));
        Solution sol;
        auto res = sol.rotateRight(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([4,5,1,2,3])LC");
    }
    // case 2
    {
        auto a0 = lctest::toList(lctest::parse(R"LC([0,1,2])LC"));
        auto a1 = lctest::toInt(lctest::parse(R"LC(4)LC"));
        Solution sol;
        auto res = sol.rotateRight(a0, a1);
        fails += lctest::check(++caseNo, res, R"LC([2,0,1])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

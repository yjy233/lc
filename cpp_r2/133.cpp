// 133. 克隆图（中等）
// https://leetcode.cn/problems/clone-graph/
//
// 给你无向 连通 图中一个节点的引用，请你返回该图的 深拷贝（克隆）。
//
// 图中的每个节点都包含它的值 val（int） 和其邻居的列表（list[Node]）。
//
// class Node {
//     public int val;
//     public List<Node> neighbors;
// }
//
// 测试用例格式：
//
// 简单起见，每个节点的值都和它的索引相同。例如，第一个节点值为 1（val = 1），第二个节点值为 2（val = 2），以此类推。该图在测试用例中使用邻接列表表示。
//
// 邻接列表 是用于表示有限图的无序列表的集合。每个列表都描述了图中节点的邻居集。
//
// 给定节点将始终是图中的第一个节点（值为 1）。你必须将 给定节点的拷贝 作为对克隆图的引用返回。
//
// 示例 1：
//
// 输入：adjList = [[2,4],[1,3],[2,4],[1,3]]
// 输出：[[2,4],[1,3],[2,4],[1,3]]
// 解释：
// 图中有 4 个节点。
// 节点 1 的值是 1，它有两个邻居：节点 2 和 4 。
// 节点 2 的值是 2，它有两个邻居：节点 1 和 3 。
// 节点 3 的值是 3，它有两个邻居：节点 2 和 4 。
// 节点 4 的值是 4，它有两个邻居：节点 1 和 3 。
//
// 示例 2：
//
// 输入：adjList = [[]]
// 输出：[[]]
// 解释：输入包含一个空列表。该图仅仅只有一个值为 1 的节点，它没有任何邻居。
//
// 示例 3：
//
// 输入：adjList = []
// 输出：[]
// 解释：这个图是空的，它不含任何节点。
//
// 提示：
//
//   - 这张图中的节点数在 [0, 100] 之间。
//
//   - 1 <= Node.val <= 100
//
//   - 每个节点值 Node.val 都是唯一的，
//
//   - 图中没有重复的边，也没有自环。
//
//   - 图是连通图，你可以从给定节点访问到所有节点。
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// [[2,4],[1,3],[2,4],[1,3]]
// --- case 2 ---
// [[]]
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
#include "test_util.h"
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    Node* cloneGraph(Node* node) {
        
    }
};

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto adj = lctest::parse(R"LC([[2,4],[1,3],[2,4],[1,3]])LC");
        std::vector<Node*> nodes;
        for (size_t i = 0; i < adj.arr.size(); i++) nodes.push_back(new Node((int)i + 1));
        for (size_t i = 0; i < adj.arr.size(); i++)
            for (auto& nb : adj.arr[i].arr) nodes[i]->neighbors.push_back(nodes[lctest::toInt(nb) - 1]);
        Solution sol;
        Node* cloned = nodes.empty() ? nullptr : sol.cloneGraph(nodes[0]);
        std::string actual = "[]";
        if (cloned) {
            std::vector<Node*> q{cloned};
            std::set<int> seen;
            std::map<int, std::vector<int>> adjOut;
            for (size_t h = 0; h < q.size(); h++) {
                Node* n = q[h];
                if (seen.count(n->val)) continue;
                seen.insert(n->val);
                adjOut[n->val];
                for (Node* nb : n->neighbors) {
                    adjOut[n->val].push_back(nb->val);
                    if (!seen.count(nb->val)) q.push_back(nb);
                }
            }
            std::vector<std::vector<int>> out;
            for (auto& kv : adjOut) out.push_back(kv.second);
            actual = lctest::show(out);
        }
        fails += lctest::checkRaw(++caseNo, actual, R"LC([[2,4],[1,3],[2,4],[1,3]])LC", true, true);
    }
    // case 2
    {
        auto adj = lctest::parse(R"LC([[]])LC");
        std::vector<Node*> nodes;
        for (size_t i = 0; i < adj.arr.size(); i++) nodes.push_back(new Node((int)i + 1));
        for (size_t i = 0; i < adj.arr.size(); i++)
            for (auto& nb : adj.arr[i].arr) nodes[i]->neighbors.push_back(nodes[lctest::toInt(nb) - 1]);
        Solution sol;
        Node* cloned = nodes.empty() ? nullptr : sol.cloneGraph(nodes[0]);
        std::string actual = "[]";
        if (cloned) {
            std::vector<Node*> q{cloned};
            std::set<int> seen;
            std::map<int, std::vector<int>> adjOut;
            for (size_t h = 0; h < q.size(); h++) {
                Node* n = q[h];
                if (seen.count(n->val)) continue;
                seen.insert(n->val);
                adjOut[n->val];
                for (Node* nb : n->neighbors) {
                    adjOut[n->val].push_back(nb->val);
                    if (!seen.count(nb->val)) q.push_back(nb);
                }
            }
            std::vector<std::vector<int>> out;
            for (auto& kv : adjOut) out.push_back(kv.second);
            actual = lctest::show(out);
        }
        fails += lctest::checkRaw(++caseNo, actual, R"LC([[]])LC", true, true);
    }
    // case 3
    {
        auto adj = lctest::parse(R"LC([])LC");
        std::vector<Node*> nodes;
        for (size_t i = 0; i < adj.arr.size(); i++) nodes.push_back(new Node((int)i + 1));
        for (size_t i = 0; i < adj.arr.size(); i++)
            for (auto& nb : adj.arr[i].arr) nodes[i]->neighbors.push_back(nodes[lctest::toInt(nb) - 1]);
        Solution sol;
        Node* cloned = nodes.empty() ? nullptr : sol.cloneGraph(nodes[0]);
        std::string actual = "[]";
        if (cloned) {
            std::vector<Node*> q{cloned};
            std::set<int> seen;
            std::map<int, std::vector<int>> adjOut;
            for (size_t h = 0; h < q.size(); h++) {
                Node* n = q[h];
                if (seen.count(n->val)) continue;
                seen.insert(n->val);
                adjOut[n->val];
                for (Node* nb : n->neighbors) {
                    adjOut[n->val].push_back(nb->val);
                    if (!seen.count(nb->val)) q.push_back(nb);
                }
            }
            std::vector<std::vector<int>> out;
            for (auto& kv : adjOut) out.push_back(kv.second);
            actual = lctest::show(out);
        }
        fails += lctest::checkRaw(++caseNo, actual, R"LC([])LC", true, true);
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

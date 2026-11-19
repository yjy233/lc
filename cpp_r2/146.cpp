// 146. LRU 缓存（中等）
// https://leetcode.cn/problems/lru-cache/
//
// 请你设计并实现一个满足  LRU (最近最少使用) 缓存 约束的数据结构。
//
// 实现 LRUCache 类：
//
//   - LRUCache(int capacity) 以 正整数 作为容量 capacity 初始化 LRU 缓存
//
//   - int get(int key) 如果关键字 key 存在于缓存中，则返回关键字的值，否则返回 -1 。
//
//   - void put(int key, int value) 如果关键字 key 已经存在，则变更其数据值 value ；如果不存在，则向缓存中插入该组 key-value 。如果插入操作导致关键字数量超过 capacity ，则应该 逐出 最久未使用的关键字。
//
// 函数 get 和 put 必须以 O(1) 的平均时间复杂度运行。
//
// 示例：
//
// 输入
// ["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
// [[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
// 输出
// [null, null, null, 1, null, -1, null, -1, 3, 4]
//
// 解释
// LRUCache lRUCache = new LRUCache(2);
// lRUCache.put(1, 1); // 缓存是 {1=1}
// lRUCache.put(2, 2); // 缓存是 {1=1, 2=2}
// lRUCache.get(1);    // 返回 1
// lRUCache.put(3, 3); // 该操作会使得关键字 2 作废，缓存是 {1=1, 3=3}
// lRUCache.get(2);    // 返回 -1 (未找到)
// lRUCache.put(4, 4); // 该操作会使得关键字 1 作废，缓存是 {4=4, 3=3}
// lRUCache.get(1);    // 返回 -1 (未找到)
// lRUCache.get(3);    // 返回 3
// lRUCache.get(4);    // 返回 4
//
// 提示：
//
//   - 1 <= capacity <= 3000
//
//   - 0 <= key <= 10000
//
//   - 0 <= value <= 10^5
//
//   - 最多调用 2 * 10^5 次 get 和 put
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// ["LRUCache","put","put","get","put","get","put","get","get","get"]
// [[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]]

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

class LRUCache {
public:
    LRUCache(int capacity) {
        
    }
    
    int get(int key) {
        
    }
    
    void put(int key, int value) {
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main() {
    int fails = 0, caseNo = 0;
    // case 1
    {
        auto ops = lctest::parse(R"LC(["LRUCache","put","put","get","put","get","put","get","get","get"])LC");
        auto args = lctest::parse(R"LC([[2],[1,1],[2,2],[1],[3,3],[2],[4,4],[1],[3],[4]])LC");
        LRUCache* obj = nullptr;
        std::vector<std::string> out;
        for (size_t i = 0; i < ops.arr.size(); i++) {
            std::string op = ops.arr[i].str;
            auto& a = args.arr[i].arr;
            if (op == "LRUCache") { obj = new LRUCache(lctest::toInt(a[0])); out.push_back("null"); }
            else if (op == "put") { obj->put(lctest::toInt(a[0]), lctest::toInt(a[1])); out.push_back("null"); }
            else if (op == "get") { out.push_back(lctest::show(obj->get(lctest::toInt(a[0])))); }
        }
        std::string actual = "[";
        for (size_t i = 0; i < out.size(); i++) { if (i) actual += ","; actual += out[i]; }
        actual += "]";
        fails += lctest::checkRaw(++caseNo, actual, R"LC([null, null, null, 1, null, -1, null, -1, 3, 4])LC");
    }
    std::cout << (fails ? "\n== FAILED ==" : "\n== ALL PASS ==") << "\n";
    return fails ? 1 : 0;
}

// 155. 最小栈（中等）
// https://leetcode.cn/problems/min-stack/
//
// 设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
//
// 实现 MinStack 类:
//
//   - MinStack() 初始化堆栈对象。
//
//   - void push(int value) 将元素 value 推入堆栈。
//
//   - void pop() 删除堆栈顶部的元素。
//
//   - int top() 获取堆栈顶部的元素。
//
//   - int getMin() 获取堆栈中的最小元素。
//
// 示例 1:
//
// 输入：
// ["MinStack","push","push","push","getMin","pop","top","getMin"]
// [[],[-2],[0],[-3],[],[],[],[]]
//
// 输出：
// [null,null,null,null,-3,null,0,-2]
//
// 解释：
// MinStack minStack = new MinStack();
// minStack.push(-2);
// minStack.push(0);
// minStack.push(-3);
// minStack.getMin();   --> 返回 -3.
// minStack.pop();
// minStack.top();      --> 返回 0.
// minStack.getMin();   --> 返回 -2.
//
// 提示：
//
//   - -2^31 <= val <= 2^31 - 1
//
//   - pop、top 和 getMin 操作总是在 非空栈 上调用
//
//   - push, pop, top, and getMin最多被调用 3 * 10^4 次
//
// ===== 示例原始输入（每行一个参数，按函数签名顺序；预期输出见上方题干示例）=====
// --- case 1 ---
// ["MinStack","push","push","push","getMin","pop","top","getMin"]
// [[],[-2],[0],[-3],[],[],[],[]]

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
using namespace std;

class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int value) {
        
    }
    
    void pop() {
        
    }
    
    int top() {
        
    }
    
    int getMin() {
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {
    // TODO: 按上方示例输入构造参数，调用函数并核对预期输出
    return 0;
}

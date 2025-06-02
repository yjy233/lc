# include<iostream>

using namespace std;


//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


/*
    这题老是翻车，两点 1：首先要使用stack，2：注意不能empty判空
*/
 
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto &c:s) {
            switch (c)
            {
            case '(':
                st.push(c);
                break;
            case ')':
                if (st.empty() || st.top() != '(') return false;
                st.pop();
                break;
            case '[':
                st.push(c);
                break;
            case ']':

                if (st.empty() || st.top() != '[') return false;

                st.pop();
                break;
            case '{':
                st.push(c);
                break;
            case '}':
                if (st.empty() || st.top() != '{') return false;
                st.pop();
                break;

            default:
                return false;
            }


        }
        
        return st.empty();
    }
};
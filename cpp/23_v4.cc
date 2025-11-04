#include "node.h"
#include <vector>

using namespace std;
class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {

        auto sortF = [](ListNode *a, ListNode *b)
        {
            if (!a)
                return false;
            if (!b)
                return true;

            return a->val < b->val;
        };

        ListNode *res = new ListNode;
        res->next = nullptr;
        ListNode *tmp = res;

        make_heap(lists.begin(), lists.end(), sortF);
        while (lists.size())
        {
            pop_heap(lists.begin(), lists.end(), sortF);

            if (lists.back())
            {
                tmp->next = lists.back();
                lists[lists.size() - 1] = lists.back()->next;
                tmp = tmp->next;
                tmp->next = nullptr;
            }

            if (lists.back())
            {
                push_heap(lists.begin(), lists.end(), sortF);
            }
        }

        return res->next;
    }
};
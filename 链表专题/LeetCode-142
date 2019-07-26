/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *p) {
        if (p == NULL) return p;
        ListNode* slow = p;
        ListNode* fast = p;
        int flag = 0;
        while (fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
            if (fast == NULL) break;
            fast = fast->next;
            if (fast == slow)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            while (p != fast)
            {
                p = p->next;
                fast = fast->next;
            }
        }
        return fast;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/66022/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
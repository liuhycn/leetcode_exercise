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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* first = head;
        ListNode* second = head->next;
        while (first->next != NULL)
        {
            if (first->val == second->val)
            {
                first->next = second->next;
                second = second->next;
            }
            else
            {
                first = first->next;
                second = second->next;
            }
        }
        return head;
    }

};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/64262/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
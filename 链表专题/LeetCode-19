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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) return head;
        ListNode* phead = new ListNode(0);
        phead->next = head;
        ListNode* first = phead;
        ListNode* second = phead;
        for (int i = 0; i < n; i++)
        {
            second = second->next;
        }
        while (second->next != NULL)
        {
            first = first->next;
            second = second->next;
        }
        //ListNode* temp = first->next->next;
        first->next = first->next->next;
        return phead->next;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/64240/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL) return head;
        ListNode* less_head = new ListNode(0);
        ListNode* more_head = new ListNode(0);
        ListNode* less_tail = less_head;
        ListNode* more_tail = more_head;
        ListNode* pthis = NULL;
        while(head != NULL)
        {
            if(head->val < x)
            {
                pthis = head;
                head = head->next;
                pthis->next = NULL;
                less_tail->next = pthis;
                less_tail = pthis;
            }
            else
            {
                pthis = head;
                head = head->next;
                pthis->next = NULL;
                more_tail->next = pthis;
                more_tail = pthis;
            }
        }
        less_tail->next = more_head->next;
        return less_head->next;
    }
};

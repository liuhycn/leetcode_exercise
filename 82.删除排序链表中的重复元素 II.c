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
        if(head == NULL || head->next == NULL) return head;
        ListNode* phead = new ListNode(0);
        ListNode* pthis = phead;
        ListNode* ptail = phead;
        int cur = 0;
        while(head != NULL && head->next != NULL)
        {
            if(head->val == head->next->val)
            {
                cur = head->val;
                head = head->next;
                while(head != NULL)
                {
                    if(head->val == cur)
                    {
                        head = head->next;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                pthis = new ListNode(head->val);
                ptail->next = pthis;
                ptail = pthis;
                head = head->next;
            }
            
        }
        if(head != NULL && head->val != cur)
        {
             pthis = new ListNode(head->val);
             ptail->next = pthis;
             ptail = pthis;
             head = head->next;
        }
        return phead->next;
    }
};

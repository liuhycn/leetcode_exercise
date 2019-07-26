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
        int cur = -100000000;
        ListNode* phead = new ListNode(0);
        ListNode* pthis = phead;
        ListNode* ptail = phead;
        while(head != NULL)
        {
            if(head->val == cur)
            {
                head = head->next;
            }
            else
            {
                cur = head->val;
                pthis = new ListNode(head->val);
                ptail->next = pthis;
                ptail = pthis;
                head = head->next;
            }
            
        }
        return phead->next;
    }
};

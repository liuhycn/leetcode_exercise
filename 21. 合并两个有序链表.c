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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * phead = new ListNode(0);
        ListNode * pthis;
        ListNode * ptail = phead;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val > l2->val)
            {
                pthis = l2;
                l2 = l2->next;
                pthis->next = NULL;
                ptail->next = pthis;
                ptail = pthis;
            }
            else
            {
                pthis = l1;
                l1 = l1->next;
                pthis->next = NULL;
                ptail->next = pthis;
                ptail = pthis;
            }
        }
        if(l1 != NULL) ptail->next = l1;
        else if (l2 != NULL) ptail->next = l2;
        return phead->next;
    }
};
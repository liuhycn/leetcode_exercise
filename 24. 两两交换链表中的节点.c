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
    ListNode* swapPairs(ListNode* head) {
        ListNode * pthis = head;
        ListNode * ptail = head;
        if(head != NULL && head->next != NULL)
        {
            pthis = pthis->next;
            ptail = pthis->next;
            head->next = swapPairs(ptail);
            pthis->next = NULL;
            pthis->next = head; 
        }
        else
        {
            return head;
        }
        return pthis;
    }
};
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
        ListNode * l = head;
        ListNode * r = head;
        ListNode * t = head;
        int cnt = 0;
        for(int i = 0;i < n - 1;i++)
        {
            r = r->next;
        }
        while(r->next != NULL)
        {
            if(cnt != 0) t = t->next;
            l = l->next;
            r = r->next;
            cnt++;
        }
        if(l == head)
        {
            return head->next;
        }
        else
        {
            t->next = l->next;
            l->next = NULL;
        }
        return head;
    }
};
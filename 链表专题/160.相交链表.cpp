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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt1 = 0;
        int cnt2 = 0;
        ListNode* h1 = headA;
        ListNode* h2 = headB;
        while(h1 != NULL)
        {
            cnt1++;
            h1 = h1->next;
        }
        while(h2 != NULL)
        {
            cnt2++;
            h2 = h2->next;
        }
        //cout<<cnt1<<" "<<cnt2;
        int less = abs(cnt1 - cnt2);
        h1 = headA;
        h2 = headB;
        if(cnt1 > cnt2)
        {
            
            while(less > 0)
            {
                h1 = h1->next;
                less--;
            }
        }
        if(cnt1 < cnt2)
        {
            while(less > 0)
            {
                h2 = h2->next;
                less--;
            }
        }
        while(h1 != NULL)
        {
            if(h1 == h2) return h1;
            h1 = h1->next;
            h2 = h2->next;
        }
        return NULL; 
    }
};

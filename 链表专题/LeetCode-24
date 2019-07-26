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

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/64325/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
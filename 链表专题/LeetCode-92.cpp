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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (head == NULL || m == n || head->next == NULL) return head;
        ListNode* phead = new ListNode(0);
        phead->next = head;
        ListNode* ptail2 = phead;
        head = phead;
        for (int i = 0; i < m - 1; i++)
        {
            head = head->next;
        }
        ListNode* ptail1 = head->next;
        for (int i = 0; i < n; i++)
        {
            ptail2 = ptail2->next;
        }
        for (int i = 0; i < n - m; i++)
        {
            ListNode* ptemp = ptail1->next;
            ptail1->next = ptail2->next;
            ptail2->next = ptail1;
            ptail1 = ptemp;
            head->next = ptemp;
        }

        return phead->next;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/65924/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
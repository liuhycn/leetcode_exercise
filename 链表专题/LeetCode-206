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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* phead = new ListNode(0);
        phead->next = head;
        int cnt = 1;
        while (head->next != NULL)
        {
            head = head->next;
            cnt ++;
        }
        ListNode* pthis = phead->next;
        //cout << pthis->val;
        for (int i = 1; i < cnt; i++)
        {
            //cout << "1" << endl;
            ListNode* ptemp = head->next;
            head->next = pthis;
            ListNode* ptemp2 = pthis;
            pthis = pthis->next;
            ptemp2->next = ptemp;
        }
        return head;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/64350/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
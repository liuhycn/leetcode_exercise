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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) return head;
        ListNode* phead = new ListNode(0);
        phead->next = head;
        ListNode* ptail;
        int cnt = 1;
        while (head->next != NULL)
        {
            cnt++;
            head = head->next;
        }
        cout << cnt << endl;
        ptail = head;
        head = phead;
        k = k % cnt;
        if (k == 0) return phead->next;
        k = cnt - k;
        for (int i = 0; i < k; i++)
        {
            head = head->next;
        }
        ListNode* pans = head->next;
        head->next = NULL;
        ptail->next = phead->next;
        return pans;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/64321/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
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
        if(k == 0 || head == NULL || head->next == NULL) return head;
        int cnt = 0;
        ListNode* tail = head;
        while(tail != NULL)
        {
            cnt++;
            tail = tail->next;
        }
        k = k % cnt;
        for(int i = 0;i < k;i++)
        {
            rotateRightOne(head);
        }
        //cout << cnt;
        return head;
    }
public:
    ListNode* rotateRightOne(ListNode* &head)
    {
        ListNode* tail = head;
        ListNode* tail_pre = head;
        tail = tail->next;
        while(tail->next != NULL)
        {
            tail_pre = tail_pre->next;
            tail = tail->next;
        }
        //cout<<head->val<<" "<<tail_pre->val<<" "<<tail->val<<endl;
        tail_pre->next = NULL;
        tail->next = head;
        head = tail;
        //cout<<head->val<<" "<<tail_pre->val<<" "<<tail->val;
        return tail;
    }
};

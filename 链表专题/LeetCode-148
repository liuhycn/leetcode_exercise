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
    ListNode* mergeSort(ListNode* head){
        if (head == NULL) return head;
        int cnt = 0;
        ListNode* phead = new ListNode(0);
        phead->next = head;
        head = phead;
        while (head->next != NULL)
        {
            head = head->next;
            cnt ++;
        }
        head = phead->next;
        if (cnt == 1) return head;
        if (cnt == 2)
        {
            if (head->val > head->next->val)
            {
                int temp = head->val;
                head->val = head->next->val;
                head->next->val = temp;
            }
            return head;
        }
        head = phead;
        for (int i = 0; i < cnt >> 1; i++)
        {
            head = head->next;
        }
        ListNode* list1 = phead->next;
        ListNode* list2 = head->next;
        phead->next = NULL;
        head->next = NULL;
        list1 = mergeSort(list1);
        list2 = mergeSort(list2);
        return merge(list1, list2);
    }
    ListNode* merge(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        ListNode* head;
        if (l1->val <= l2->val) {
            head = l1;
            l1->next = merge(l1->next, l2);
        } else {
            head = l2;
            l2->next = merge(l1, l2->next);
        }
        return head;
    }
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/66132/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
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
        if (headA == NULL || headB == NULL) return NULL;
        int length1 = 0;
        int length2 = 0;
        ListNode* phead1 = new ListNode(0);
        phead1->next = headA;
        ListNode* phead2 = new ListNode(0);
        phead2->next = headB;
        headA = phead1;
        headB = phead2;
        while (headA->next != NULL)
        {
            headA = headA->next;
            length1++;
        }
        while (headB->next != NULL)
        {
            headB = headB->next;
            length2++;
        }
        //cout << length1 << " "<< length2<<endl;
        headA = phead1;
        headB = phead2;
        if (length1 > length2)
        {
            for (int i = 0; i < length1 - length2; i++)
            {
                headA = headA->next;
            }
        }
        else if (length2 > length1)
        {
            for (int i = 0; i < length2 - length1; i++)
            {
                headB = headB->next;
            }
        }

        while (headA != NULL)
        {
            if (headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/65988/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
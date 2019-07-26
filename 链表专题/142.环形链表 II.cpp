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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        int flag = 0;
        while(fast != NULL)
        {
            //cout<<11<<endl;
            if(slow->next != NULL) slow = slow->next;
            else return NULL;
            if(fast->next != NULL && fast->next->next != NULL) fast = fast->next->next;
            else return NULL;
            if(fast == slow) 
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            while(head != slow)
            {
                slow = slow->next;
                head = head->next;
            }
            return head;
        }
        return NULL;
    }
};



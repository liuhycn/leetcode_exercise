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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* anw = new ListNode(carry);
        ListNode* pointer = anw;
        while(l1 != NULL && l2 != NULL)
        {
            pointer->next = new ListNode((carry+l1->val+l2->val)%10);
            pointer = pointer->next;
            carry = (carry+l1->val+l2->val)/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != NULL)
        {
            pointer->next = new ListNode((carry+l1->val)%10);
            pointer = pointer->next;
            carry = (carry+l1->val)/10;
            l1 = l1->next;
        }
        while(l2 != NULL)
        {
            pointer->next = new ListNode((carry+l2->val)%10);
            pointer = pointer->next;
            carry = (carry+l2->val)/10;
            l2 = l2->next;
        }
        if(carry != 0)
        {
            pointer->next = new ListNode(carry);
            pointer = pointer->next;
        }
        return anw->next;
    }
};

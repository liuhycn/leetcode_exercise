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
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL)
        {
            //cout<<11<<endl;
            if(slow->next != NULL) slow = slow->next;
            else return false;
            if(fast->next != NULL && fast->next->next != NULL) fast = fast->next->next;
            else return false;
            if(fast == slow) return true;
        }
        return false;
    }
};

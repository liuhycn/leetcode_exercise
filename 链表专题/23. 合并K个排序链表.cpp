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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if(lists.size() == 0) return NULL;
        if(lists.size() == 1) return lists[0];
        if(lists.size() == 2) return mergeTwoLists(lists[0],lists[1]);
        vector<ListNode*>list1;
        vector<ListNode*>list2;
        int mid = lists.size() / 2;
        for(int i = 0;i < mid;i++)
        {
            list1.push_back(lists[i]);
        }
        for(int i = mid;i < lists.size();i++)
        {
            list2.push_back(lists[i]);
        }
        ListNode* ans1 = mergeKLists(list1);
        ListNode* ans2 = mergeKLists(list2);
        return mergeTwoLists(ans1,ans2);
    }
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode * phead = new ListNode(0);
        ListNode * pthis;
        ListNode * ptail = phead;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val > l2->val)
            {
                pthis = l2;
                l2 = l2->next;
                pthis->next = NULL;
                ptail->next = pthis;
                ptail = pthis;
            }
            else
            {
                pthis = l1;
                l1 = l1->next;
                pthis->next = NULL;
                ptail->next = pthis;
                ptail = pthis;
            }
        }
        if(l1 != NULL) ptail->next = l1;
        else if (l2 != NULL) ptail->next = l2;
        return phead->next;
    }
};

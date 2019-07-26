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
    void deleteNode(ListNode* node) {
        if (node == NULL) return;
        while (node->next->next != NULL)
        {
            node->val = node->next->val;
            node = node->next;
        }
        node->val = node->next->val;
        node->next = NULL;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/64246/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
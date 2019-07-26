/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        if (root->left == NULL && root->right == NULL) return true;
        if (root->left && root->right && root->left->val == root->right->val)
        {
            TreeNode* temp1 = new TreeNode(0);
            temp1->left = root->left->right;
            temp1->right = root->right->left;
            TreeNode* temp2 = new TreeNode(0);
            temp2->left = root->left->left;
            temp2->right = root->right->right;
            return isSymmetric(temp1) && isSymmetric(temp2);
        }
        else return false;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/67544/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
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
    vector<TreeNode*>pPath;
    vector<TreeNode*>qPath;
    bool findPath(vector<TreeNode*>& pathBuf, TreeNode* tar, TreeNode* root)
    {
        if (root == NULL) return false;
        if (root->val == tar->val) 
        {
            pathBuf.push_back(root);
            return true;
        }
        pathBuf.push_back(root);
        if (findPath(pathBuf, tar, root->left) == true)
        {
            return true;
        }
        if (findPath(pathBuf, tar, root->right) == true)
        {
            return true;
        }
        pathBuf.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        findPath(pPath, p, root);
        findPath(qPath, q, root);
        for (int i = 0; i < pPath.size(); i++)
        {
            printf("%d ", pPath[i]->val);
        }
        printf("\n");
        for (int i = 0; i < qPath.size(); i++)
        {
            printf("%d ", qPath[i]->val);
        }
        printf("\n");
        int len = min(pPath.size(), qPath.size());
        TreeNode* ans = NULL;
        for (int i = len - 1; i >= 0; i--)
        {
            if (pPath[i]->val == qPath[i]->val)
            {
                ans = pPath[i];
                break;
            }
        }
        return ans;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/69465/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
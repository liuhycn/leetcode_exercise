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
    vector<int> ans;
    void dfs(TreeNode* root)
    {
        if (root == NULL) return;
        dfs(root->left);
        ans.push_back(root->val);
        dfs(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        //if (root == NULL) return ans;
        dfs(root);
        return ans;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/68531/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
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
    int dfs(TreeNode* root, int &dep)
    {
        if (root == NULL) 
        {
            dep = 0;
            return 0;
        }
        int depl = 0;
        int depr = 0;
        int d1 = dfs(root->left, depl);
        int d2 = dfs(root->right, depr);
        dep = max(depl, depr) + 1;
        int ans = max(d1, d2);
        return max(ans, depl + depr);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int aaaaaaaaa = 0;
        return dfs(root, aaaaaaaaa);
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/69686/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
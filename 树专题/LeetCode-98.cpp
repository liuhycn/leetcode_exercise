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
    bool dfs(TreeNode* root, long long int l, long long int r){
        if (root == NULL) return true;
        //cout << l <<" " << r <<endl;
        if (root->val > l && root->val < r)
            return (dfs(root->left, l, root->val) && dfs(root->right, root->val, r));
        else return false;
    }
    bool isValidBST(TreeNode* root) {
        //cout << INT64_MIN << " " << INT64_MAX << endl;
        return (dfs(root, INT64_MIN, INT64_MAX));
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/67314/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
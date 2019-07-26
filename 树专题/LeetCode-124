class Solution {
public:
    int ans;
    int maxSinglePath(TreeNode* root)
    {
        if (root == NULL) return 0;
        int vl = maxSinglePath(root->left);
        int vr = maxSinglePath(root->right);
        int c1 = root->val;
        int c2 = root->val + vl;
        int c3 = root->val + vr;
        int c4 = root->val + vl + vr;
        ans = max(ans, max(max(c1, c2), max(c3, c4)));
        return max(max(vl, vr) + root->val, root->val);
    }
    int maxPathSum(TreeNode* root) {
        ans = -1e9;
        maxSinglePath(root);
        return ans;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/71029/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
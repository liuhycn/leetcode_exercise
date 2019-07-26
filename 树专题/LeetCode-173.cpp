class BSTIterator {
public:
    stack<TreeNode*> buf;
    BSTIterator(TreeNode* root) {
        if (root == NULL) return;
        buf.push(root);
        while (root->left != NULL)
        {
            buf.push(root->left);
            root = root->left;
        }
    }
    /** @return the next smallest number */
    int next() {
        TreeNode* cur = buf.top();
        int ans = cur->val;
        buf.pop();
        if (cur->right != NULL)
        {
            buf.push(cur->right);
            cur = cur->right;
            while (cur->left != NULL)
            {
                buf.push(cur->left);
                cur = cur->left;
            }
        }
        return ans;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !buf.empty();
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/71375/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
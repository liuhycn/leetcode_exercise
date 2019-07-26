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
    vector<int>pre;
    vector<int>in;
    map<int, int> mymap;
    TreeNode* builder(int pl, int pr, int il, int ir)
    {
        if (pl > pr || il > ir) return NULL;
        TreeNode* pthis = new TreeNode(pre[pl]);
        int index = mymap[pthis->val];
        pthis->left = builder(pl + 1, pl + index - il, il, index - 1);
        pthis->right = builder(pr - ir + index + 1, pr, index + 1, ir);
        return pthis;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty() || inorder.empty()) return NULL;
        pre.assign(preorder.begin(), preorder.end());
        in.assign(inorder.begin(), inorder.end());
        int length = in.size();
        for (int i = 0; i < length; i++)
            mymap[in[i]] = i;
        return builder(0, pre.size() - 1, 0, in.size() - 1);
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/68630/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
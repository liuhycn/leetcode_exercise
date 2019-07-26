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
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL) return ans;
        queue<TreeNode*> Q;
        queue<int> layer;
        Q.push(root);
        layer.push(1);
        while (!Q.empty())
        {
            int thisLay = layer.front();
            layer.pop();
            TreeNode* thisNode = Q.front();
            Q.pop();
            if (ans.size() < thisLay) 
            {
                vector<int> tmp;
                ans.push_back(tmp);
            }
            ans[thisLay - 1].push_back(thisNode->val);
            if (thisNode->left != NULL)
            {
                Q.push(thisNode->left);
                layer.push(thisLay + 1);
            }
            if (thisNode->right != NULL)
            {
                Q.push(thisNode->right);
                layer.push(thisLay + 1);
            }
        }
        return ans;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/69261/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
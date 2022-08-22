/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        while(!q.empty())
        {
            int n=q.size();
            ans++;
            for(int i=0;i<n;i++)
            {
                auto it=q.front();
                q.pop();
                if(it->left==NULL && it->right==NULL)
                    return ans;
                if(it->left!=NULL)
                    q.push(it->left);
                if(it->right!=NULL)
                    q.push(it->right);
            }
        }
        return ans;
    }
};
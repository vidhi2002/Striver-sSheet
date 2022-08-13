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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> q;
        q.push(cloned);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                auto it=q.front();
                q.pop();
                if(it->val==target->val)
                    return it;
                if(it->left!=NULL)
                    q.push(it->left);
                if(it->right!=NULL)
                    q.push(it->right);
            }
        }
        return NULL;
    }
};
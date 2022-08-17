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
    TreeNode* built(vector<int>& pre,int preS,int preE,vector<int>& in,int inS,int inE,map<int,int> inMap)
    {
        if(preS>preE || inS>inE)
            return NULL;
        TreeNode* root=new TreeNode(pre[preS]);
        int inRoot=inMap[root->val];
        int numLeft=inRoot-inS;
        root->left=built(pre,preS+1,preS+numLeft,in,inS,inRoot-1,inMap);
        root->right=built(pre,preS+numLeft+1,preE,in,inRoot+1,inE,inMap);
        return root;
    }
    TreeNode* build(vector<int>& pre,vector<int>& in)
    {
        map<int,int> inMap;
        for(int i=0;i<in.size();i++)
            inMap[in[i]]=i;
        TreeNode* root=built(pre,0,pre.size()-1,in,0,in.size()-1,inMap);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder=preorder;
        sort(inorder.begin(),inorder.end());
        return build(preorder,inorder);
    }
};
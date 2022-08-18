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
     unordered_map<int,vector<TreeNode*>> dp;
    vector<TreeNode*> allPossibleFBT(int n) {
        
        if(n==0)
            return {NULL};
        
        if(dp.find(n)!=dp.end())  //memoize 
            return dp[n];
        
        vector<TreeNode*> ans;
    
        for(int i=1;i<=n;i++)
        {
            vector<TreeNode*> leftArr=allPossibleFBT(i-1);
            vector<TreeNode*> rightArr=allPossibleFBT(n-i);
            
            for(auto l:leftArr)
            {
                for(auto r:rightArr)
                {
                    if( (l and r) or (!l and !r) )  //either 0 child or 2 child
                    {
                        TreeNode* root=new TreeNode(0);
                        root->left=l;
                        root->right=r;
                        
                        ans.push_back(root);
                    }
                }
            }
        }
        return dp[n]=ans;
    }
};
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
    TreeNode* func(vector<int> &nums , int l , int r)
    {
        if(l>r)
        {
            return NULL;
        }
        
        if(l==r)
        {
            TreeNode* node=new TreeNode(nums[l]);
            return node;
        }
        
        int mid=(l+r)/2;
        
        TreeNode* root=new TreeNode(nums[mid]);
        
        root->left=func(nums , l , mid-1);
        root->right=func(nums , mid+1 , r);
        
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        
        // find out the in order travsersal
        
        stack< TreeNode*> stk;
        
        TreeNode* curr=root;
        
        vector<int> nums;
        
        while(curr!=NULL || !stk.empty())
        {
            while(curr)
            {
                stk.push(curr);
                
                curr=curr->left;
            }
            
            curr=stk.top();
            stk.pop();
            nums.push_back(curr->val);
            
            curr=curr->right;
            
        }
        
        // Now build a bst 
        
        int n=nums.size();
        
        TreeNode* ans = func(nums , 0 , n-1);
        
        return ans;
    }
};
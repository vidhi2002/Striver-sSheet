// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//Back-end complete function Template for C++

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

class Solution{
    public:
    bool postorderr(Node*root,int post[],int &indd){
        if(root==NULL) return true;
        bool l=postorderr(root->left,post,indd);
        bool r=postorderr(root->right,post,indd);
        if(root->data!=post[indd++]){
            return false;
        }
        return l&&r;
    }
    int ind=0;
    Node* build_in_preorder(int pre[],int st,int end,unordered_map<int,int>&mp,int n){
        if(ind==n || st>end) return NULL;
        Node*root=new Node(pre[ind++]);
        int mid=mp[root->data];
        root->left=build_in_preorder(pre,st,mid-1,mp,n);
        root->right=build_in_preorder(pre,mid+1,end,mp,n);
        return root;
    }
    bool checktree(int preorder[], int inorder[], int postorder[], int n) 
    { 
    	ind=0;
    	unordered_map<int,int>mp;
    	for(int i=0;i<n;i++){
    	    mp.insert({inorder[i],i});
    	}
    	Node*root=build_in_preorder(preorder,0,n-1,mp,n);
    	int indd=0;
    	return postorderr(root,postorder,indd);
    } 
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int preorder[n];
		int inorder[n];
		int postorder[n];

		for (int i = 0; i < n; ++i)
			cin>>preorder[i];

		for (int i = 0; i < n; ++i)
			cin>>inorder[i];

		for (int i = 0; i < n; ++i)
			cin>>postorder[i];
        
        Solution obj;
		if(obj.checktree(preorder, inorder, postorder, n))
			cout << "Yes\n";
		else
			cout<<"No\n";
	} 
	return 0; 
} 

  // } Driver Code Ends
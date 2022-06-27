// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        if(n==0)
            return NULL;
        map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[in[i]]=i;
        Node* root=build(in,0,n-1,pre,0,n-1,mp,n);
        return root;
    }
    Node* build(int in[],int inS,int inE,int pre[],int preS,int preE,map<int,int>& mp,int n)
    {
        if(inS>inE || preS>preE)
            return NULL;
        Node *root=new Node(pre[preS]);
        int inRoot=mp[root->data];
        int numsLeft=inRoot-inS;
        root->left=build(in,inS,inRoot-1,pre,preS+1,preS+numsLeft,mp,n);
        root->right=build(in,inRoot+1,inE,pre,preS+numsLeft+1,preE,mp,n);
        return root;
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
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends
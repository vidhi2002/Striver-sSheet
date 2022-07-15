// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    
    //reverse the LL function
    
    Node* reverse(Node* head)
    {
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL)
        {
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
  
    }
      
   
    //main function
       Node* compute(Node* head)
       {
           //first reverse the LL 
           head=reverse(head);
                      
                
           // Traverse the reversed list. 
           //Keep max till now. If the next node 		   is less than max,
           //then delete the next node, otherwise max = next node. 
           
           Node* ptr=head;
           int maximum=ptr->data;
           Node* temp;
           while(ptr->next!=NULL)
           {
               if(maximum > ptr->next->data)
               {
                   temp=ptr->next;
                   ptr->next=temp->next;
               }
               
               else
               {
                   ptr=ptr->next;
                   maximum=ptr->data;
               }
           }
           
          
           
      //reverse back the LL to get original order
           head= reverse(head);
          
           return  head;
       }
           
    };
   
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends
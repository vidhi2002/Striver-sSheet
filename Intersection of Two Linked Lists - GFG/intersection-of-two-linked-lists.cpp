// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


 // } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
          unordered_set<int>s;
       Node *temp = head2;
       while(temp != NULL) {
           s.insert(temp->data);
           temp = temp -> next;
       }
       Node *temp1 = head1;
       while(temp1 != NULL) {
           if(s.find(temp1 -> data) != s.end()) {
               head1 = temp1;
               break;
           }
           temp1 = temp1 -> next;
       }
       Node *tail = head1, *temp2 = tail -> next;
       while(temp2 != NULL) {
           if(s.find(temp2 -> data) != s.end()) {
               tail -> next = temp2;
               tail = temp2;
           }
           temp2 = temp2 -> next;
       }
       tail -> next = NULL;
       return head1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
  // } Driver Code Ends
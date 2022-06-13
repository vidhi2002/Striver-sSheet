// { Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


 #include<bits/stdc++.h>

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* list1, Node* list2)  
{  
    // code here
    if(list1==NULL && list2==NULL)
            return list1;
        else if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        vector<int> v;
        Node* p=list1;
        while(p!=NULL)
        {
            v.push_back(p->data);
            p=p->next;
        }
        Node* q=list2;
        while(q!=NULL)
        {
            v.push_back(q->data);
            q=q->next;
        }
        sort(v.begin(),v.end());
        Node *head=new Node(v[0]);
        head->next=NULL;
        Node *h=head;
        for(int i=1;i<v.size();i++)
        {
            Node *p=new Node(v[i]);
            h->next=p;
            h=h->next;
            
        }
        h->next=NULL;
        return head;
}  
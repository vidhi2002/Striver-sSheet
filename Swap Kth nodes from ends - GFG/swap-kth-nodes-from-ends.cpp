// { Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    if(K>num)
        return head;
    if(K==num || K==1)
    {
        Node* pre;
        Node* p=head;
        while(p->next!=NULL)
        {
            pre=p;
            p=p->next;
        }
        p->next=head->next;
        pre->next=head;
        head->next=NULL;
        head=p;
        return p;
    }
    int start=K,end=num-K+1,i=1,j=1;
    if(end<start)
        swap(end,start);
    Node* pre1;
    Node* p1=head;
    Node* n1=p1->next;
    while(i<start)
    {
        pre1=p1;
        p1=n1;
        n1=n1->next;
        i++;
    }
    Node* pre2;
    Node* p2=head;
    Node* n2=p2->next;
    while(j<end)
    {
        pre2=p2;
        p2=n2;
        n2=n2->next;
        j++;
    }
    if(num%2==0 && (start==num/2|| end==num/2))
    {
        pre1->next=p2;
        p2->next=p1;
        p1->next=n2;
    }
    else{
        p2->next=n1;
        p1->next=n2;
        pre2->next=p1;
        pre1->next=p2;
    }
    /*Node* t=head;
    
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;*/
    return head;
    
    
    
    
}

// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
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
    cout<< endl;
}

Node* subLinkedList(Node* l1, Node* l2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = subLinkedList(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* Structure of linked list Node

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

*/

//You are required to complete this method

void swapPointer(Node** a,Node** b){
    Node* t=*a;
    *a=*b;
    *b=t;
}
int Size(Node* head){
    int i=0;
    Node* temp=head;
    while(temp){
        i++;
        temp=temp->next;
    }
    return i;
}
bool l2greater(Node* l1,Node* l2){
    int n=Size(l1), m=Size(l2);
    if(n>m){
        return false;
    }else if(m>n){
        return true;
    }
    while(l1 and l2 and l1->data==l2->data){
        l1=l1->next;
        l2=l2->next;
    }
    if(!l1 and !l2){
        return false;
    }
    if(l1->data>l2->data){
        return false;
    }
    return true;
}
Node* rev(Node* head){
    Node *prev=NULL,*curr=head,*nxt;
    while(curr){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}
Node* subLinkedList(Node* l1, Node* l2){
    while(l1 and l1->data==0) l1=l1->next;
    while(l2 and l2->data==0) l2=l2->next;
    // I am considering the l1 is greater
    if(l2greater(l1,l2)){
        swapPointer(&l1,&l2);
    }
    // Now I have to subtract from linked list l1
    l1=rev(l1);
    l2=rev(l2);
    Node *t1=l1,*t2=l2;
    while(t1 and t2){
        t1->data-=t2->data;
        t1=t1->next;
        t2=t2->next;
    }
    t1=l1;
    int c=0;
    while(t1){
        t1->data+=c;
        if(t1->data<0){
            t1->data+=10;
            c=-1;
        }else{
            c=0;
        }
        t1=t1->next;
    }
    l1=rev(l1);
    // remove leading zeros 
    while(l1 and l1->data==0) l1=l1->next;
    if(!l1) return new Node(0);
    return l1;
}
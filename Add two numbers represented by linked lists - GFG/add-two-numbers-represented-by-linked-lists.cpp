// { Driver Code Starts
// driver

#include <bits/stdc++.h>
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


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    string add(string n,string m)
    {
        if(m.length()>n.length())
            swap(n,m);
        string ans="";
        int carry=0,j=n.length()-1;
        for(int i=m.length()-1;i>=0;i--)
        {
            int a=m[i]-'0',b=n[j]-'0';
            //cout<<a<<" "<<b<<endl;
            int c=a+b+carry;
            ans=to_string(c%10)+ans;
            carry=c/10;
            j--;
        }
        if(n.length()>m.length()){
            for(int i=j;i>=0;i--)
            {
                int a=n[i]-'0';
                int c=a+carry;
                ans=to_string(c%10)+ans;
                carry=c/10;
            }
        }
        if(carry>0)
            ans=to_string(carry)+ans;
        return ans;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        if(first==NULL)
            return second;
        if(second==NULL)
            return first;
        string n="",m="";
        Node* p1=first;
        Node* p2=second;
        while(p1!=NULL)
        {
            n+=to_string(p1->data);
            p1=p1->next;
        }
        while(p2!=NULL)
        {
            m+=to_string(p2->data);
            p2=p2->next;
        }
        string ans=add(n,m);
        int r=ans[0]-'0';
        Node* head=new Node(r);
        Node* p=head;
        
        for(int i=1;i<ans.length();i++)
        {
            r=ans[i]-'0';
            Node* h=new Node(r);
            p->next=h;
            p=p->next;
        }
        return head;
    }
};


// { Driver Code Starts.

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
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends
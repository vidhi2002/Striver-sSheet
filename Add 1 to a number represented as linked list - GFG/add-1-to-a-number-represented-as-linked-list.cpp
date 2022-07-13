// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

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

class Solution
{
    public:
    string addone(string num)
    {
        int carry=0;
        string ans="";
        for(int i=num.length()-1;i>=0;i--)
        {
            int r=num[i]-'0';
            if(i==num.length()-1)
                r=r+1;
            else
                r=r+carry;
            ans=to_string(r%10)+ans;
            carry=r/10;
        }
        if(carry>0)
            ans=to_string(carry)+ans;
        return ans;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        string num="";
        Node* p=head;
        int count=0;
        while(p!=NULL)
        {
            num+=to_string(p->data);
            p=p->next;
            count++;
        }
        string ans=addone(num);
        //cout<<ans<<endl;
        if(ans.length()>count)
        {
            int n=ans[0]-'0';
            Node* r=new Node(n);
            r->next=head;
            head=r;
            r=r->next;
            for(int i=1;i<ans.length();i++)
            {
                r->data=ans[i]-'0';
                r=r->next;
            }
        }
        else
        {
            //cout<<"in";
            Node* r=head;
            for(int i=0;i<ans.length();i++)
            {
                //cout<<r->data<<" ";
                r->data=ans[i]-'0';
                //cout<<ans[i]<<endl;
                r=r->next;
            }
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
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends
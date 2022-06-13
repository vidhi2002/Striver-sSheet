// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        if(s.length()%2!=0)
            return false;
        stack<int> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
                st.push(s[i]);
            else if(!st.empty())
            {
                 if(s[i]=='}' && st.top()=='{')
                    st.pop();
                else if(s[i]==']' && st.top()=='[')
                    st.pop();
                else if(s[i]==')' && st.top()=='(')
                    st.pop();
                else
                    return false;
            }
            else
                return false;
           
        }
        if(st.empty())
            return true;
        else
            return false;
        
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
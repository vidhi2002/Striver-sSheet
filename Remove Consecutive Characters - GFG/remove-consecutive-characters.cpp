// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        int i=0,j=1,n=S.length();
        string ans="";
        while(i<n && j<n)
        {
            if(S[j]==S[i])
                j++;
            else
            {
                ans=ans+S[i];
                i=j;
                j++;
            }
        }
        ans=ans+S[i];
        return ans;
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
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends
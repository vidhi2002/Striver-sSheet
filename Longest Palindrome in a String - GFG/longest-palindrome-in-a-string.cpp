// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
       int n=s.length();
       string res="";
       int resLen=0;
       for(int i=0;i<n;i++)
       {
           //for odd length
           int l=i,r=i; //consider i as center
           while(l>=0 && r<n && s[l]==s[r])
           {
               int len=r-l+1;
              // cout<< s[l] << len;
               if(len>resLen)
               {
                   
                   res=s.substr(l,len);
                   resLen=len;
               }
               l--;
               r++;
           }
           //for even length
           l=i,r=i+1; //consider i and i+1 as center
           while(l>=0 && r<n && s[l]==s[r])
           {
               int len=r-l+1;
               if(len>resLen)
               {
                   res=s.substr(l,len);
                   resLen=len;
               }
               l--;
               r++;
           }
       }
       
       return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
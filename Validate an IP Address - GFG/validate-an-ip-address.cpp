// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
         int isValid(string s) {
           if(s[0]=='.')
           {return 0;}
           s.push_back('.');
           int i,n=s.length() , sum=0,idot=0;
           
           for(i=0; i<n; i++)
           {   
               
               char c=s[i];
               if(c<'0'&&s[i]!='.'||c>'9'&&s[i]!='.')
               {
                   return 0;
               }
               //checking if 0 and dot is repeating
               if(s[i]=='.'&&s[i+1]=='.'||s[i-1]=='.'&&s[i]=='0'&&s[i+1]!='.'||s[i]=='0'&&s[i+1]=='0')
               {
                  return 0;
               }
               else if(s[i]=='.')
               {
                   if(sum>255||sum<0)
                       {
                           return 0;
                       }
                   sum=0;
                   idot=idot+1;
               }
               else {
               sum=sum*10+(s[i]-'0');
               }
           }
           if(idot==4)
               return 1;
           else return 0;
       }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends
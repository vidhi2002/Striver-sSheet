// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string str){
        // code here 
         int l=0;
     int count=0;
     for(int i=0;i<str.size();i++)
     {
         if(str[i]=='[')
         {
             if(l<=0)
             {
                 count-= l;
                 
             }
             l++;
         }
         
         else{
             l--;
         }
     }
     
     return count;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends
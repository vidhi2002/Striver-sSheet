// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    const int mod = 1e9+7;
   int nCr(int n, int r){
       if(r>n) return 0;
       int t[n+1][r+1];
       
       for(int i=0;i<=n;i++){
           for(int j=0;j<=min(i,r);j++){
               if(i==j || j==0) t[i][j] =1;
               else t[i][j] = ((t[i-1][j])%mod + (t[i-1][j-1])%mod)%mod;
           }
       }
     return t[n][r]%mod;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  // } Driver Code Ends
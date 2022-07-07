// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
 public:
   vector<long long> distributeCandies(int n, int k) {
       // code here
       vector<long long>v(k,0);
       long long res=1;// increases by 1;
       long long i=0;// index of array
       while(n>0)
       {
           if(n>=res)
           v[i%k]+=res;
           else{
           v[i%k]+=n;
           break;
           }
           n-=res;
           res++;
           i++;
       }
       return v;
   }
};
// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N>>K;
        
        Solution ob;
        vector<long long> res = ob.distributeCandies(N,K);
        
        for(int i=0; i<res.size(); i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
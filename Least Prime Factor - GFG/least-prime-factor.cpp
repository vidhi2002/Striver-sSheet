// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
 public:
   vector<int> leastPrimeFactor(int N) {
       // code here
       vector<bool>primes(N+1,true);
       primes[0]=0, primes[1]=0;
       //sieve of eratosthenes
       for(int i=2;i<=N;i++)
       {
           if(primes[i]){
               for(int m=i*i;m<=N;m+=i)
                   primes[m]=false; 
           }
       }
       vector<int>ans(N+1,0);
       ans[1] = 1, ans[2] = 2, ans[3] = 3;
       for(int i=4;i<=N;i++){
           for(int j=2;j<=i;j++){
               if(primes[j]==true && i%j==0){
                   ans[i] = j;
                   break;
               }
           }
       }
     return ans; 
   }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}
  // } Driver Code Ends
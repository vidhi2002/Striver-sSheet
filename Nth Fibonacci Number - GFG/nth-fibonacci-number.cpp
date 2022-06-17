// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        vector<int> t(1001,0);
        t[0]=0;
        t[1]=1;
        t[2]=1;
        for(int i=3;i<=n;i++)
            t[i]=(t[i-1]+t[i-2])%1000000007;
        return t[n]%1000000007;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
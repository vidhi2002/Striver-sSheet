// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
       int dp[100010];
    int func(int n){
        if(n==0) return 0;
        
        if(n%10 == 4) return 1;
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = func(n/10);
    }
    int countNumberswith4(int N) {
        // code here
        memset(dp,-1,sizeof(dp));
        int sum = 0;
        for(int i=1;i<=N;i++)
        sum += func(i);
        
     return sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
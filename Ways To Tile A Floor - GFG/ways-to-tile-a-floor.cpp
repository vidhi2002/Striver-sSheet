// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long numberOfWays(long long N) {
        //code here
        if(N==1)
            return 1;
        if(N==2)
            return 2;
        long long prev1=1,prev2=2;
        for(int i=3;i<=N;i++)
        {
            long long cur=(prev1+prev2)%1000000007;
            prev1=prev2%1000000007;
            prev2=cur%1000000007;
            
        }
        return prev2%1000000007;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
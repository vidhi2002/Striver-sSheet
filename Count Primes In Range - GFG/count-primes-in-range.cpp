// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPrimes(int L, int R) {
        // code here
        long long p[R+1]={0};
        for(long long i=3;i<=R;i+=2)
            p[i]=1;
        for(long long i=3;i<=R;i+=2)
        {
            if(p[i]==1)
            {
                for(long long j=i*i;j<=R;j+=i)
                    p[j]=0;
            }
        }
        p[2]=1;
        p[0]=p[1]=0;
        int count=0;
        for(long long i=L;i<=R;i++)
        {
            if(p[i]==1)
                count++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        int ans = ob.countPrimes(L, R);
        cout << ans << "\n";
    }
}  // } Driver Code Ends
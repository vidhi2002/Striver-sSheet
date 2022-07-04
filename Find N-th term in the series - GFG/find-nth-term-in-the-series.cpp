// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthOfSeries(long long int n){
        // code here
        if(n<3)
        {
            if(n==0)
                return 0;
            if(n==1)
                return 9;
            if(n==2)
                return 33;
        }
        int p1=9,p2=33;
        for(int i=3;i<=n;i++)
        {
            int cur=abs(p2-p1)+16+p2;
            p1=p2;
            p2=cur;
        }
        return p2;
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
        cout << ob.nthOfSeries(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
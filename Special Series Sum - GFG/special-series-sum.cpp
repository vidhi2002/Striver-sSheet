// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int sumOfTheSeries(long long int n){
        // code here
        if(n==0 || n==1)
            return n;
        long long int p=1,k=2,ans=1;
        
        for(long long int i=2;i<=n;i++)
        {
            int cur=p+k;
            ans+=cur;
            p=cur;
            k++;
        }
        return ans;
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
        cout << ob.sumOfTheSeries(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
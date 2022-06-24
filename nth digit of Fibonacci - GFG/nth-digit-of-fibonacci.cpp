// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    char nthFibonacciDigit(long long int n) {
        // code here
        string s="11";
        long long int p1=1,p2=1;
        for(long long int i=3;i<=50;i++)
        {
           long long int cur=p1+p2;
           s=s+to_string(cur);
           p1=p2;
           p2=cur;
        }
        return s[n-1];
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
        cout << ob.nthFibonacciDigit(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
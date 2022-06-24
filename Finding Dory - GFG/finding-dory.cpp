// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

// User function Template for C++
class Solution {
  public:
  long long int cheak(int n){
      int sq=sqrt(n);
      return (sq*sq==n);
  }
    long long int nisDoryOrNot(long long int n){
        // code here
        return (cheak(5*n-4)||cheak(5*n+4));    
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
        cout << ob.nisDoryOrNot(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
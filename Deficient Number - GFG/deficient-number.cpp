// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string isDeficient(long long int x) {
        // code here
        long long int ans=0;
        for(int i=1;i<=x;i++)
        {
            if(x%i==0)
                ans+=i;
        }
        if(ans<2*x)
            return "YES";
        return "NO";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int x;
        cin >> x;
        Solution ob;
        cout << ob.isDeficient(x) << endl;
    }
    return 0;
}
  // } Driver Code Ends
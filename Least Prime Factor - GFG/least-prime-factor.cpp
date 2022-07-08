// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isPrime(int n)
    {
        if(n==1)
            return 1;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return i;
        }
        return n;
    }
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int> ans;
        for(int i=1;i<=n;i++)
            ans.push_back(isPrime(i));
        ans.insert(ans.begin(),1);
        ans.pop_back();
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
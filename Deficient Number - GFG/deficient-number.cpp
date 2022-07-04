// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  long long int Summ(long long int x)
  {
      long long int ans=1,k=2;
      while(x>1)
      {
          if(x%k==0){
            ans+=k;
            x=x/k;
            cout<<k<<" ";
          }
            else
                k++;
      }
      cout<<ans;
      return ans+1;
  }
    string isDeficient(long long int x) {
        // code here
        long sum = 0;
        for(long i = 1;i<=x;i++){
            if(x%i==0){
                sum = sum+i;
            }
        }
        if(2*x>sum)
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
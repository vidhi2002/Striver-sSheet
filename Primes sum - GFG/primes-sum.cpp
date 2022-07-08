// { Driver Code Starts

// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool isprime(int N)
  {
      for(int i=2;i<=sqrt(N);i++)
      {
          if(N%i==0)
          {
              return false;
          }
      }
      return true;
      
  }
    string isSumOfTwo(int N){
        // code here
       // cout<<isprime(yes);
        for(int i=2 ;i<N-1;i++)
        {
            if(isprime(i))
            {
                int x=N-i;
                if(isprime(x))
                {
                    return "Yes";
                }
            }
        }
        return "No";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}
  // } Driver Code Ends
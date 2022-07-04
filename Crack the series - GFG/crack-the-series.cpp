// { Driver Code Starts
//Initial Template for C++

// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

// User function Template for C++
class Solution {
  public:
    long double NthTerm(int N){
        // code here
        long double res=2;
        if(N==1 ||N==2)
            return res;
        else if(N%2!=0)
        {
            for(int i=3;i<N+1;i+=2)
                res=pow(res,2);
            return res;
        }
        else
        {
            for(int i=4;i<N+1;i+=2)
                res=pow(res,3);
            return res;
        }
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
        cout<< fixed << setprecision(0)<<ob.NthTerm(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
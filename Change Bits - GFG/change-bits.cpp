// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
     vector<int> changeBits(int N) {
       int sum=0,newval,count=0;
       int diff;
       int realval=N;
       while(N>0)
       {
           int a=N%2;
           if(a==0)
           {
               a=1;
           }
           N=N/2;
           count++;
           sum+=(a*pow(2,(count-1)));
       }
       newval=sum;
       diff=abs(realval-newval);
       return {diff,newval};
       // code here
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends
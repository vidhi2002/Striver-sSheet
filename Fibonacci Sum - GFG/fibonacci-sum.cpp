// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
public:
    long long int fibSum(long long int N){
        //code here
        if(N==1)
            return 1;
        if(N==2)
            return 2;
        long long int prev1=1,prev2=1,ans=2;
        for(int i=3;i<=N;i++)
        {
            long long int r=(prev1+prev2)%1000000007;
            ans=(ans+r)%1000000007;
            prev1=prev2%1000000007;
            prev2=r%1000000007;
        }
        return ans%1000000007;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
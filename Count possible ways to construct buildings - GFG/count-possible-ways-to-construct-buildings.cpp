// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    if(N==0)
	        return 1;
	    if(N==1)
	        return 2*2;
	   long long prev1=2,prev2=1;
	    for(int i=2;i<=N;i++)
	    {
	        long long cur=(prev1+prev2)%1000000007;
	        prev2=prev1%1000000007;
	        prev1=cur%1000000007;
	        
	    }
	    long long int ans=(prev1*prev1)%1000000007;
	    return (int)ans%1000000007;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
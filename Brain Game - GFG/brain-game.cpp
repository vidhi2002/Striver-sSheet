// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	void prime_sieve(int *p)
	{
	    for(int i=3;i<=1000;i+=2)
	        p[i]=1;
	   for(int i=3;i<=1000;i+=2)
	   {
	       if(p[i]==1)
	       {
	           for(int j=1;j<=1000;j+=i)
	            p[j]=0;
	       }
	   }
	   p[2]=1;
	   p[1]=p[0]=0;
	}
    bool brainGame(vector<int>nums) {
    	vector<int>a(1005);
    	for(int i = 2; i<= 1000; i++){
    		for(int j = 2*i; j <= 1000; j+=i)
    			a[j] = max(a[j], 1 + a[i]);
    	}
    	int x = 0;
    	for(int i = 0; i < nums.size(); i++){
    		x = x ^ a[nums[i]];
    	}
    	if(x == 0)
    		return false;
    	return true;
    }

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		bool ans = ob.brainGame(nums);
		if(ans)
			cout << "A\n";
		else cout << "B\n";
	}  
	return 0;
}  // } Driver Code Ends
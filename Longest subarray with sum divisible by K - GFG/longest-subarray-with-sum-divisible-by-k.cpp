// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	     unordered_map<int,int> map;
    int sum=0,rem=0;
    int ans=0;
    map[0]=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        rem=sum%k;
        if(rem<0) rem+=k;
        if(map.find(rem)!=map.end()){
            int index=map[rem];
            int len=i-index;
            if(len>ans) ans=len;
        }else{
            map[rem]=i;
        }
    }return ans;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends
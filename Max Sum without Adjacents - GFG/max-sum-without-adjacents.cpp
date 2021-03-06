// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int f(int *arr,int n,vector<int>& t)
	{
	    if(n==0)
	        return arr[n];
	       if(n<0)
	        return 0;
	   if(t[n-1]!=-1)
	    return t[n-1];
	   int r=arr[n];
	   return t[n-1]=max(r+f(arr,n-2,t),f(arr,n-1,t));
	}
	
	int findMaxSum(int *arr, int n) {
	    // code here
	    //int ans=0;
	    vector<int> t(n-1,-1);
	    return f(arr,n-1,t);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
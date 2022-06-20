// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int> mp;
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            if(mp[a[i]]==k)
                {
                    ans=a[i];
                    break;
                }
                
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}  // } Driver Code Ends
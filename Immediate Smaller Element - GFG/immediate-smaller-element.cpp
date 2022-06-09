// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void immediateSmaller(int *ans, int n) {
	    //  code here
	    for(int i=0;i<n-1;i++)
	    {
	        if(ans[i+1]<ans[i])
	            ans[i]=ans[i+1];
	        else
	            ans[i]=-1;
	    }
	    ans[n-1]=-1;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
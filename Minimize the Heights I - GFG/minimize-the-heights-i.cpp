// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        // code here
       if (n == 0){
           return -1;
       }
       
       sort(arr, arr+n);
       int diff = (arr[n-1] - arr[0]);
       int maxi, mini;
       
       for (int i=1; i<n; i++){
           
           maxi = max(arr[i-1]+k, arr[n-1]-k);
           mini = min(arr[0] + k, arr[i]-k);
           diff = min(maxi - mini, diff);
           
       }return diff;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
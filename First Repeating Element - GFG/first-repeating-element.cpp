// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        int ans = -1;
        unordered_set<int> s;
        for(int i=n-1;i>=0;i--){
            if(s.find(arr[i]) != s.end()){
                ans = i;
            }
            s.insert(arr[i]);
        }
        return (ans == -1)? -1 : ans+1;
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

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends
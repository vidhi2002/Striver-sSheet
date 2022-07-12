// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
        int canRepresentBST(int arr[], int N) {
         stack<int>s;
         s.push(arr[0]);
         int x=-1;
         for(int i=1;i<N;i++)
         {
             if(arr[i]<arr[i-1])
             {
                 if(arr[i]<x)
                 return 0;
                 s.push(arr[i]);
             }
             else
             {
                while(!s.empty() && s.top()<arr[i])
                {
                    x=s.top();
                    s.pop();
                }
                s.push(arr[i]);
             }
         }
         return 1;
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        cout << ob.canRepresentBST(arr, N) << endl;
    }
    return 0;
}  // } Driver Code Ends
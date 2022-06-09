// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
         priority_queue<pair<int,int>> max_heap;
        for(auto it: arr){
            if(abs(it-x) != 0) 
                max_heap.push({abs(it-x), -1 * it});
            if(max_heap.size() > k)
                max_heap.pop();
        }
        vector<int> ans;
        while(!max_heap.empty()){
            ans.push_back(-1 * max_heap.top().second);
            max_heap.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
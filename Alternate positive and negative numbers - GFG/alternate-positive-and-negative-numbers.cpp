// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    queue<int>p,q;
    for(int i = 0;i<n;i++){
        if(arr[i]>=0) p.push(arr[i]);
        if(arr[i]<0) q.push(arr[i]);
    }
   
   int i=0;
    while(!p.empty() and i<n){
        arr[i++] = p.front();
        p.pop();
        if(!q.empty() and i<n){
            arr[i] = q.front();
            i++;
            q.pop();
        } 
    }
    while(i<n and !q.empty()){
        arr[i] = q.front();
        i++;
        q.pop(); 
    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
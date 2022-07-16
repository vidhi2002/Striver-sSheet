// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        // code here
        if(n==d || d==0)
            return;
        vector<int> front,back;
        for(int i=0;i<n;i++){
            if(i<d)
                front.push_back(arr[i]);
            else
                back.push_back(arr[i]);
        }
        int i=0;
        while(i<back.size())
        {
            arr[i]=back[i];
            i++;
        }
        int j=0;
        while(i<n)
        {
            arr[i]=front[j];
            i++;
            j++;
        }
            
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}


  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> countMultiples(int arr[], int q[], int n, int m) ;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n >> m;
        int q[m], arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (i = 0; i < m; i++) cin >> q[i];

        vector<int> answering = countMultiples(arr, q, n, m);
        for (auto it : answering) cout << it << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends



vector<int> countMultiples(int A[], int Q[], int N, int M) {
    // Your code goes here
    int maxi=-1;
    for(int i=0;i<N;i++)
        maxi=max(maxi,A[i]);
    for(int j=0;j<M;j++)
        maxi=max(maxi,Q[j]);
    vector<int> count(maxi+1,0);
    for(int i=0;i<N;i++)
        count[A[i]]++;
    vector<int> ans(maxi+1,0);
    vector<int> result(M);
    for(int i=1;i<=maxi;i++)
    {
        for(int j=i;j<=maxi;j+=i)
            ans[i]+=count[j];
    }
    for(int i=0;i<M;i++)
        result[i]=ans[Q[i]];
    return result;
}
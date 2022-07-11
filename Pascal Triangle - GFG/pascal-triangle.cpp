// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector <ll> ans;
        vector<vector<ll>> dp(n,vector<ll>(n,-1));
        //init. a 2 D vector of n*n with value -1;
        for(int i = 0;i<n;i++)
        //element at n-1th row, i th column are pushed into the vector
        ans.push_back(element(n-1,i,dp));
        return ans;
    }
    int element(int row,int col,vector<vector<ll>> &dp)
    {
        //base case
        if(row==col || col == 0)
        {
            return dp[row][col] = 1;
        }
        //checks if the element is already computed
        if(dp[row][col]!=-1)
        //if computed, return the stored value
        return dp[row][col];
        //else compute the element at the given position through recursive calling and stores the value 
        return dp[row][col] = (element(row-1,col-1,dp)%1000000007+element(row-1,col,dp)%1000000007)%1000000007;
    }
};

// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends
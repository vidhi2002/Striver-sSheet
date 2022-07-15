// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[51][51];     
    int solve(vector<vector<int>>&mat, int x, int y){
        int m = mat.size();
        int n  = mat[0].size(); 
        if (x < 0 or x == m or y == n)
            return INT_MIN;
            
        if (y == n-1)
            return mat[x][y]; 
            
        if (dp[x][y] != -1)
            return dp[x][y]; 
            
        int rt = solve(mat, x-1, y+1);
        int rr = solve(mat, x, y+1); 
        int rb = solve(mat, x+1, y+1); 
        
        return dp[x][y] = mat[x][y] + max({rt, rr, rb}); 
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        memset(dp, -1, sizeof(dp)); 
        int ans = 0; 
        for(int i = 0; i < n; i++)
            ans = max(ans, solve(M, i, 0));
        return ans; 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
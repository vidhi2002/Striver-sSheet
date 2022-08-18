class Solution {
public:
int solve(int n,int m,vector<vector<int>>&v,vector<vector<int>>&dp){
if(!n && !m && !v[n][m])return 1;
if(v[n][m])return 0;
if(dp[n][m]!=-1)return dp[n][m];
if(!n)return dp[n][m]=solve(n,m-1,v,dp);
if(!m)return dp[n][m]=solve(n-1,m,v,dp);
return dp[n][m]=solve(n-1,m,v,dp)+solve(n,m-1,v,dp);
}
int uniquePathsWithObstacles(vector<vector<int>>&v){
int n=v.size(),m=v[0].size();
vector<vector<int>>dp(n+1,vector(m+1,-1));
return solve(n-1,m-1,v,dp);
}
};
class Solution {
public:
   int maximalSquare(vector<vector<char>>& matrix) {
int dp[matrix.size()][matrix[0].size()];
int n=matrix.size(),m=matrix[0].size();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]=='0')
                dp[i][j]=0;
            else
                dp[i][j]=1;
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(matrix[i][j]!='0')
                dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
            
        }
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            res=max(res,dp[i][j]);
    }
    return res*res;
}
};
class Solution {
   
public:
   
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> t(m,vector<int> (n,0));
        t[m-1][n-1]=grid[m-1][n-1];
        for(int i=n-2;i>=0;i--)
            t[m-1][i]=t[m-1][i+1]+grid[m-1][i];
        for(int i=m-2;i>=0;i--)
            t[i][n-1]=t[i+1][n-1]+grid[i][n-1];
        for(int i=m-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
                t[i][j]=min(t[i+1][j],t[i][j+1])+grid[i][j];
        }
        return t[0][0];
    }
};
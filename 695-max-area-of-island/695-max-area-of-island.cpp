class Solution {
public:
    void find(vector<vector<int>>& grid,int x,int y,vector<vector<int>> dirs,int& sum)
    {
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size())
            return;
        grid[x][y]=-1;
        sum++;
        for(int i=0;i<4;i++)
        {
            int r=x+dirs[i][0];
            int c=y+dirs[i][1];
            if(r>=0 && c>=0 && r<grid.size() && c<grid[0].size() && grid[r][c]==1){
                //sum++;
                find(grid,r,c,dirs,sum);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        vector<vector<int>> dirs{{-1,0},{0,-1},{1,0},{0,1}};
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    int sum=0;
                    find(grid,i,j,dirs,sum);
                    //cout<<sum<<" ";
                    ans=max(ans,sum);
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    void find(vector<vector<char>>& grid,int x,int y,vector<vector<int>> dirs)
    {
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size())
            return;
        grid[x][y]='o';
        for(int i=0;i<4;i++)
        {
            int r=x+dirs[i][0];
            int c=y+dirs[i][1];
            if(r>=0 && c>=0 && r<grid.size() && c<grid[0].size() && grid[r][c]=='O')
                find(grid,r,c,dirs);
        }
    }
    void solve(vector<vector<char>>& grid) {
        vector<vector<int>> dirs{{-1,0},{0,-1},{1,0},{0,1}};
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(i==0)
                {
                    if(grid[i][j]=='O')
                        find(grid,i,j,dirs);
                }
                else if(i==grid.size()-1)
                {
                    if(grid[i][j]=='O')
                        find(grid,i,j,dirs);
                }
                else if(j==0)
                {
                    if(grid[i][j]=='O')
                        find(grid,i,j,dirs);
                }
                else if(j==grid[0].size()-1)
                {
                    if(grid[i][j]=='O')
                        find(grid,i,j,dirs);
                }
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='o')
                    grid[i][j]='O';
                else if(grid[i][j]=='O')
                    grid[i][j]='X';
            }
        }
    }
};
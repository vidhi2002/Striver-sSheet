class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int fresh=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
                else if(grid[i][j]==1)
                    fresh++;
            }
        }
        if(fresh==0)
            return 0;
        vector<vector<int>> dirs{{-1,0},{1,0},{0,-1},{0,1}};
        int level=-1;
        while(!q.empty())
        {
            int size=q.size();
            level++;
            while(size>0)
            {
                auto rem=q.front();
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int r=rem.first+dirs[i][0];
                    int c=rem.second+dirs[i][1];
                    if(r>=0 && c>=0 && r<grid.size() && c<grid[0].size() && grid[r][c]==1)
                    {
                        q.push({r,c});
                        grid[r][c]=0;
                        fresh--;
                    }
                    
                }
                size--;
            }
        }
        if(fresh==0)
            return level;
        return -1;
    }
};
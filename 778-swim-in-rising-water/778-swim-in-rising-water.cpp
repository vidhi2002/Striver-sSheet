//#define pp pair<int,pair<int,int>> ;
class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        priority_queue <pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push(make_pair(grid[0][0],make_pair(0,0)));
        vector<vector<int>> dirs{{-1,0},{0,-1},{1,0},{0,1}};
        vector<vector<bool>> vis(n,vector<bool> (n,false));
        while(!pq.empty())
        {
            auto rem=pq.top();
            pq.pop();
            int x=rem.second.first,y=rem.second.second,z=rem.first;
            if(x==n-1 && y==n-1)
                return z;
            if(vis[x][y]==true)
                continue;
            vis[x][y]=true;
            for(int i=0;i<4;i++)
            {
                int r=x+dirs[i][0] ,c=y+dirs[i][1];
                if(r<0 || c<0 || r>=n || c>=n)
                    continue;
                pq.push(make_pair(max(z,grid[r][c]),make_pair(r,c)));
            }
        }
        return 0;
        
    }
};
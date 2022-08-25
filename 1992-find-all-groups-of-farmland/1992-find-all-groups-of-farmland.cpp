class Solution {
public:
    void find(vector<vector<int>>& land,int x,int y,int& X,int& Y,vector<vector<int>> dirs)
    {
        if(x<0 || y<0 || x>=land.size() || y>=land[0].size())
            return;
        land[x][y]=-1;
        for(int i=0;i<4;i++)
        {
            int r=x+dirs[i][0];
            int c=y+dirs[i][1];
            if(r>=0 && c>=0 && r<land.size() && c<land[0].size() && land[r][c]==1)
            {
                X=max(X,r);
                Y=max(Y,c);
                find(land,r,c,X,Y,dirs);
            }
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        vector<vector<int>> dirs{{-1,0},{0,-1},{1,0},{0,1}};
        for(int i=0;i<land.size();i++)
        {
            for(int j=0;j<land[0].size();j++)
            {
                if(land[i][j]==1)
                {
                    int X=i,Y=j;
                    find(land,i,j,X,Y,dirs);
                    ans.push_back({i,j,X,Y});
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
// this question is similar as count no of island except that there is one more condition that we need to count only those island whose all cells are 1 (land) in grid1 //
    //  So we will count the number of island in grid2 and just keep a track with a flag or bool variable that there should be no cell in grid2 having 0(water) value//
    
    int res; // to keep track wheter there is any cell in grid1 having 0
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i,int j)
    {
        if(i<0||j<0||i>=grid2.size()||j>=grid2[0].size()||grid2[i][j]==0)return;
        // except this condition everything is same as no of island 
        if(grid2[i][j]==1&&grid1[i][j]==0)res=1;
        
        grid2[i][j]=0;
        dfs(grid1,grid2,i+1,j);
        dfs(grid1,grid2,i,j+1);
        dfs(grid1,grid2,i-1,j);
        dfs(grid1,grid2,i,j-1);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int cnt=0;
        for(int i=0;i<grid1.size();i++)
        {
            for(int j=0;j<grid1[0].size();j++)
            {
                res=0;
                if(grid2[i][j]==1){
                   dfs(grid1,grid2,i,j);
                if(res==0)cnt++;
                }
            }
        }
        return cnt;
    }
};
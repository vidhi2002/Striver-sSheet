class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> v;
        for(int i =0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                    v.push_back({i,j});
            }
        }
        int i=0;
        while(i<v.size())
        {
            int x=v[i][0];
            int y=v[i][1];
            for(int k=0;k<matrix[0].size();k++)
                matrix[x][k]=0;
            for(int k=0;k<matrix.size();k++)
                matrix[k][y]=0;
            i++;
        }
    }
};
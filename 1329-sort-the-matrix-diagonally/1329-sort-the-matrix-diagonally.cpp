class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        if( m==1 || n==1)
            return mat;
        for(int i=n-1;i>=0;i--)
        {
            int x=i,y=0;
            vector<int> v;
            while(x<n && y<m)
            {
                v.push_back(mat[x][y]);
                y++;
                x++;
                
            }
            sort(v.begin(),v.end());
            x=i;
            y=0;
            int k=0;
            while(x<n && y<m)
            {
                mat[x][y]=v[k];
                x++;
                y++;
                k++;
            }
        }
        for(int i=1;i<m;i++)
        {
            int x=0,y=i;
            vector<int> v;
            while(x<n && y<m)
            {
                v.push_back(mat[x][y]);
                y++;
                x++;
                
            }
            sort(v.begin(),v.end());
            x=0;
            y=i;
            int k=0;
            while(x<n && y<m)
            {
                mat[x][y]=v[k];
                x++;
                y++;
                k++;
            }
        }
        return mat;
    }
};
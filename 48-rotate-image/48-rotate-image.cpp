class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int j=0;j<n;j++)
        {
            vector<int> h;
            for(int i=n-1;i>=0;i--)
            {
                h.push_back(matrix[i][j]);
            }
            matrix.push_back(h);
        }
        matrix.erase(matrix.begin(),matrix.begin()+n);
    }
};
class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m = grid.size(), n= grid[0].size();
        vector<vector<int> > rows(m+1, vector<int>(n+1, 0));
        vector<vector<int> > cols(m+1, vector<int>(n+1, 0));
        
        // prefix sum based on rows.
        for(int i=0; i<m; ++i) {
            for(int j=0; j<n; ++j) {
                rows[i][j+1] = rows[i][j] + grid[i][j];
                
            }
        }
        
        // prefix sum based on columns.
        for(int j=0; j<n; ++j) {        
            for(int i=0; i<m; ++i) {
                cols[i+1][j] = cols[i][j] + grid[i][j];
            }
        }
        
        // the length of magic square, in descrasing order
        for(int d = min(m, n); d > 1; --d) {
            for(int i=0; i+d <= m; i++) {
                for(int j=0; j+d <=n; j++) {
                    // sum baseline.
                    int sum = rows[i][j+d] - rows[i][j];
                    bool equal = true;
                    
                    // sum of each row.
                    for(int r=i; r<i+d; ++r){
                        if(rows[r][j+d] - rows[r][j] != sum) {
                            equal = false;
                            break;
                        }
                    }
                    
                    // sum of each column.
                    for(int c=j; c<j+d; ++c){
                        if(cols[i+d][c] - cols[i][c] != sum) {
                            equal = false;
                            break;
                        }
                    }
                    
                    // sum of diagonal and reverse diagonal.
                    int diag = 0, rdiag = 0;
                    for(int l=0; l<d; ++l) {
                        diag += grid[i+l][j+l];
                        rdiag += grid[i+d-1-l][j+l];
                    }
                    if(diag != sum || rdiag != sum) equal = false;
                    
                    // if all sums are equal
                    if(equal) return d;
                }
            }
        }
        
        return 1;
    }
};
class Solution {
private:
        int solve(int i,int j,vector<vector<int>> &matrix,vector<vector<int>>&dp){
    
    int n = matrix.size() ; // rows total
    int m = matrix[0].size();
            
    if(j <0 || j>=m) return (int)1e9;  // return maximum as we can as we got out of boundary 
            
    if(i == n-1)  // reached last row
        return matrix[i][j];
    
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int down = matrix[i][j] + solve(i+1,j,matrix,dp);  // move down
    int leftDownDiagonal = matrix[i][j] + solve(i+1,j-1,matrix,dp);  // move left down diagonal
    int rightDownDiagonal = matrix[i][j] + solve(i+1,j+1,matrix,dp);// move right down diagonal
    
    return dp[i][j] = min(down,min(leftDownDiagonal,rightDownDiagonal)) ;  // take minimum path cost
}
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
      int n = matrix.size();  // rows
      int m  = matrix[0].size() ; // columns
    
      int mini = INT_MAX - 5;
      vector<vector<int>>dp(n,vector<int>(m,-1)) ;
    
      for(int j = 0;j<m;j++){
          mini = min(mini,solve(0,j,matrix,dp));
      }
    
    return mini ;
    }
};
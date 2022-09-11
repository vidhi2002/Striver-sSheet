class Solution {
    int helper(string s , vector<string>& word ,int i ,  int s1 , int n ,int k , vector<vector<int>>& dp   ){
            if(i == s1 )return dp[i][n] =  true ; 
            if( n == 0 ) return dp[i][n] =  false ;
            
            string r = s.substr(i,word[n-1].length());
         if(dp[i][n] != - 1  ){
          
            return dp[i][n];}
            if(r == word[n-1]) {
                return dp[i][n] =  helper(s, word , i+word[n-1].length() , s1  , k ,k,dp ) +  helper(s , word , i , s1 , n-1  , k,dp );
            }
            else{
                return dp[i][n] =  helper(s , word , i , s1 , n-1 ,k,dp) ; 
            }
            
        
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int s1 = s.length();
        int n = wordDict.size();
        vector<vector<int>> dp(s1+1 , vector<int> (n+1 ,-1 )); 
        return helper(s , wordDict ,0 ,  s1 , n , n ,dp) ;
    }
};
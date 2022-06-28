class Solution {
public:
    int dpsol(vector<int>v,int n){
        vector<int>dp(n+1);
        dp[0] = 0;
        dp[1] = v[0];
        if(n>1)
        dp[2] = max(v[1],v[0]);
        
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1];
            
            dp[i] = max(dp[i],v[i-1]+dp[i-2]);
        }
       
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        return dpsol(nums,n);
    }
};
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        vector< unordered_map<long long , int>> dp ( n );
        int ans = 0;
        
        for(int i = 1; i < n ; i++){
            for(int j = 0; j < i ; j++){
                long long diff = (long long)nums[i] - (long long)nums[j];
                dp[i][diff]++;
                
                if ( dp[j].find(diff) != dp[j].end()){
                    dp[i][diff] += dp[j][diff];
                    ans += dp[j][diff];
                }
            }
        }
        
        return ans;
    }
};
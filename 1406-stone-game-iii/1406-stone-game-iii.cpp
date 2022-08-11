class Solution {
public:
   int dp[(int)1e5];
    int solve(int idx,vector<int> &stone){
        
        if( idx == stone.size())return 0;
        if(dp[idx] != -1)return dp[idx];
        int ans = INT_MIN;
        
        ans = max(ans,stone[idx] - solve(idx + 1,stone)); // next turn for bob that's why -solve
        
        if(idx + 1 < stone.size()){
            ans = max(ans,stone[idx] + stone[idx + 1] - solve(idx + 2,stone));
        }
        
        if(idx + 2 < stone.size()){
            ans = max(ans,stone[idx] + stone[idx + 1] + stone[idx + 2] - solve(idx + 3,stone));
        }
        
        
        return dp[idx] = ans;
        
    }
    
    string stoneGameIII(vector<int>& stoneValue) {

        memset(dp,-1,sizeof(dp));
        
        int v = solve(0,stoneValue);
        return v < 0 ? "Bob" : (v == 0) ? "Tie" : "Alice";  
    }
};
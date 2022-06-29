class Solution {
public:
    int dp[1001][1001];
    string longestPalindrome(string s) {
        int n= s.size();
        string ans="";
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j++)
            {
                if(i==j)
                    dp[i][j]=1;
                else if(i+1==j)
                {
                    if(s[i]==s[j])
                        dp[i][j]=2;
                    else
                        dp[i][j]=0;
                }
                else
                {
                    if(s[i]==s[j])
                    {
                        if(dp[i+1][j-1]==0)
                            dp[i][j]=0;
                        else
                            dp[i][j]=2+dp[i+1][j-1];
                    }
                    else
                        dp[i][j]=0;
                }
                if(ans.size()<=dp[i][j])
                    ans= s.substr(i,j-i+1);
            }
        }
        return ans;
    }
};
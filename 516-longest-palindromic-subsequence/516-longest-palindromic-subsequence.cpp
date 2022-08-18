class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string p=s;
        reverse(s.begin(),s.end());
        vector<vector<int>> t(s.length()+1,vector<int> (s.length()+1,0));
        for(int i=1;i<s.length()+1;i++)
        {
            for(int j=1;j<s.length()+1;j++)
            {
                if(s[i-1]==p[j-1])
                    t[i][j]=t[i-1][j-1]+1;
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[s.length()][s.length()];
    }
};
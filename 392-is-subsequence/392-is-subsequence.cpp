class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<vector<int>> v(s.length()+1,vector<int>(t.length()+1,0));
        for(int i=1;i<s.length()+1;i++)
        {
            for(int j=1;j<t.length()+1;j++)
            {
                if(s[i-1]==t[j-1])
                    v[i][j]=1+v[i-1][j-1];
                else
                    v[i][j] = max(v[i-1][j],v[i][j-1]);
            }
        }
        if(v[s.length()][t.length()]==s.length())
            return true;
        return false;
    }
};
class Solution {
public:
    int charsum(string s1)
    {
        int ans=0;
        for(int i=0;i<s1.length();i++)
            ans+=(int)s1[i];
        return ans;
    }
    int rec(string s1,string s2,int n,int m,vector<vector<int>>& t)
    {
        if(n==0)
            return t[n][m]=charsum(s2);
        if(m==0)
            return t[n][m]=charsum(s1);
        if(t[n][m]!=0)
            return t[n][m];
        if(s1[n-1]==s2[m-1])
        {
            if(t[n-1][m-1]!=0)
                return t[n-1][m-1];
            else
                return t[n][m]=rec(s1.substr(0,n-1),s2.substr(0,m-1),n-1,m-1,t);
        }
        else
        {
            int a,b;
            if(t[n-1][m]!=0)
                a=(int)s1[n-1]+t[n-1][m];
            else
                a=(int)s1[n-1]+rec(s1.substr(0,n-1),s2,n-1,m,t);
            if(t[n][m-1]!=0)
                b=(int)s2[m-1]+t[n][m-1];
            else
                b=(int)s2[m-1]+rec(s1,s2.substr(0,m-1),n,m-1,t);
            return t[n][m]=min(a,b);
        }
    }
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.length(),m=s2.length();
        vector<vector<int>> t(n+1,vector<int>(m+1,0));
        return rec(s1,s2,n,m,t);
    }
};
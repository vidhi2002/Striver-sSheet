class Solution {
public:
    int numSquares(int n) {
        if(n<=3)
            return n;
        vector<int> t(n+1,0);
        t[1]=1;
        for(int i=2;i<n+1;i++)
        {
            int mini=INT_MAX;
            for(int j=1;j*j<=i;j++)
            {
                int rem=i-j*j;
                if(t[rem]<mini)
                    mini=t[rem];
            }
            t[i]=mini+1;
        }
        return t[n];
    }
};
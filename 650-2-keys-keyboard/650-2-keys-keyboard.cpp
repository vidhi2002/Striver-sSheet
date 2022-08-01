class Solution {
public:
    int minSteps(int n) {
        if(n==1)
            return 0;
        if(n<=5)
            return n;
        int ans=0;
        for(int i=2;i*i<=n;)
        {
            if(n%i==0)
            {
                ans+=i;
                n=n/i;
            }
            else
                i++;
        }
        if(n!=1)
            ans+=n;
        return ans;
    }
};
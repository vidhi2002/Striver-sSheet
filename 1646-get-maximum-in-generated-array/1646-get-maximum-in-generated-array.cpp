class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0 || n==1)
            return n;
        if(n==2)
            return 1;
        vector<int> v(n+1,0);
        v[1]=1;
        int maxi=INT_MIN;
        for(int i=2;i<n+1;i++)
        {
            if(i%2==0)
                v[i]=v[i/2];
            else
                v[i]=v[i/2]+v[i/2+1];
        }
        sort(v.begin(),v.end());
        return v[n];
        
    }
};
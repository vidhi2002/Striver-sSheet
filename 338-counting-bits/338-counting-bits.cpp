class Solution {
public:
    int count(int n)
    {
        int count=0;
        while(n>0)
        {
            if(n&1)
                count++;
            n=n/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<n+1;i++)
        {
            ans.push_back(count(i));
        }
        return ans;
    }
};
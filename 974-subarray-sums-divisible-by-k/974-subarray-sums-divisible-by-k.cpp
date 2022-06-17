class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> pre(k+1,0);
        pre[0]=1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            sum%=k;
            sum=(sum+k)%k;
            pre[sum]++;
        }
        int ans=0;
        for(int i=0;i<pre.size();i++)
            ans+=pre[i]*(pre[i]-1)/2;
        return ans;
        
    }
};
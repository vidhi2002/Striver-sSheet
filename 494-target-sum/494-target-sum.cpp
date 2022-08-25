class Solution {
public:
    void find(vector<int>& nums,int target,int n,int i,int sum,int& ans)
    {
        if(i==n)
        {
            if(sum==target)
                ans++;
            return;
        }
        find(nums,target,n,i+1,sum+nums[i],ans);
        find(nums,target,n,i+1,sum-nums[i],ans);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans=0;
        find(nums,target,nums.size(),0,0,ans);
        return ans;
    }
};
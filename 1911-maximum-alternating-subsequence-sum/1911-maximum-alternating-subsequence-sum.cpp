class Solution {
public:
    long long find(vector<int>& nums,int i,int p,vector<vector<long long>>& t)
    {
        if(i>=nums.size())
            return 0;
        if(t[i][p]!=-1)
            return t[i][p];
        long long ans=0,ele=(long long)nums[i];
        if(p==0)
            ans=find(nums,i+1,1,t)+ele;
        else
            ans=find(nums,i+1,0,t)-ele;
        ans=max(ans,find(nums,i+1,p,t));
        return t[i][p]=ans;
        
    }
    long long maxAlternatingSum(vector<int>& nums) {
        vector<vector<long long>> t(nums.size(),vector<long long> (2,-1));
        return find(nums,0,0,t);
    }
};
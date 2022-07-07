class Solution {
public:
    long long summ(vector<int>& nums,int n)
    {
        long long ans=0;
        for(int i=0;i<n;i++)
            ans+=nums[i];
        return ans;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        if(target>summ(nums,n))
            return 0;
        if(target==summ(nums,n))
            return n;
        int i=0,j=0,cur=0,len=INT_MAX;
        while(i<n && j<n)
        {
            cur+=nums[j];
            while(cur>=target)
            {
                len=min(len,j-i+1);
                cur-=nums[i];
                i++;
            }
            j++;
        }
            
        return len;
    }
};
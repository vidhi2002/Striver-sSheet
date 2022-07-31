class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)
            return 0;
        vector<int> t(nums.size(),0);
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i-2]-nums[i-1]==nums[i-1]-nums[i])
            {
                if(t[i-1]!=0)
                    t[i]=1+t[i-1];
                else
                    t[i]=1;
            }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
            ans+=t[i];
        return ans;
    }
};
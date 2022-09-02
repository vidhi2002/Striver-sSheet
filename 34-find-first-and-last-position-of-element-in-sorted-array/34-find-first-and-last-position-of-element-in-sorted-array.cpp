class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return {-1,-1};
        if(nums.size()==1)
        {
            if(nums[0]==target)
                return {0,0};
            return {-1,-1};
        }
        vector<int> ans{-1,-1};
        int check=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target && check==-1)
            {
                ans[0]=i;
                check=i;
            }
            else if(check>-1 && nums[i]==target)
                check=i;
            else if(check>-1 && nums[i]!=target)
            {
                ans[1]=i-1;
                return ans;
            }
        }
        ans[1]=check;
        return ans;
    }
};
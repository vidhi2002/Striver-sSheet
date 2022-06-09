class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1,count=0,val=-1;
            while(count<nums.size())
            {
                if(nums[j%nums.size()]>nums[i])
                {
                    val=nums[j%nums.size()];
                    break;
                }
                j++;
                count++;
            }
            v.push_back(val);
        }
        return v;
    }
};
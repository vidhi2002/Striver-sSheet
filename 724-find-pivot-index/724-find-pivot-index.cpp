class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix;
        prefix.push_back(nums[0]);
        vector<int> left(nums.size(),0);
        vector<int> right(nums.size(),0);
        if(nums.size()==1)
        {
            if(nums[0]==0)
                return 0;
            return -1;
        }
        for(int i=1;i<nums.size();i++){
            prefix.push_back(prefix[i-1]+nums[i]);
            left[i]=prefix[i-1];
        }
        for(int i=0;i<nums.size();i++)
            right[i]=prefix[nums.size()-1]-prefix[i];
        for(int i=0;i<nums.size();i++ )
        {
            if(left[i]==right[i])
                return i;
        }
        return -1;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>floor(nums.size()/2))
                return nums[i];
        }
        int ans;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>floor(nums.size()/2)){
                ans=it->first;
                break;
            }
        }
        return ans;
    }
};
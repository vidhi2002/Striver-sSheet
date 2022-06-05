class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int ans;
        for(auto i: mp)
        {
            if(i.second>1)
            {
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};
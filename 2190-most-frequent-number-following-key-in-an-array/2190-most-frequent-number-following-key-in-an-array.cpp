class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int> mp;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==key)
                mp[nums[i]]++;
        }
        int cmp=0,ans=0;
        for(auto it: mp){
            if(it.second> cmp)
            {
                cmp=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};
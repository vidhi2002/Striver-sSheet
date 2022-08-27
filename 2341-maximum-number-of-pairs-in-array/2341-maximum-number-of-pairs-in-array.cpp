class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int x=0,y=0;
        for(auto it: mp)
        {
            x=x+it.second/2;
            y=y+it.second%2;
        }
        vector<int> ans;
        ans.push_back(x);
        ans.push_back(y);
            return ans;
    }
};
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int y: nums)
            ans.push_back(nums[y]);
        return ans;
        
    }
};
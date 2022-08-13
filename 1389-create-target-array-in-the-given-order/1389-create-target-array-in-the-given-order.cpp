class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            vector<int> h;
            h.push_back(nums[i]);
            v.insert(v.begin()+index[i],h.begin(),h.end());
            h.clear();
        }
        return v;
    }
};
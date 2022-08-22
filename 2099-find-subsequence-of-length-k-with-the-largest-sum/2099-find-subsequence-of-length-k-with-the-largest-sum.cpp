class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>sorted = nums;
        sort(sorted.begin(), sorted.end(), greater<int>());
        vector<int>ans;
        unordered_map<int, int>m;
        sorted.resize(k);
        
        for(auto i : sorted){
            m[i]++;
        }
        
        for(auto i : nums){
            if(m[i] != 0){
                ans.push_back(i);
                m[i]--;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int i=0,j=nums.size()-1,k=nums.size()-1;
        while(i<=j)
        {
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                ans[k]=nums[i]*nums[i];
                i++;
                k--;
            }
            else
            {
                ans[k]=nums[j]*nums[j];
                k--;
                j--;
            }
        }
        return ans;
    }
};
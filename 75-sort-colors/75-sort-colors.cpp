class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        if(n>1)
        {
            int i=0,j=1;
            while(i<n && j<n)
            {
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                    j++;
                }
                else
                    j++;
                if(j==n)
                {
                    i++;
                    j=i+1;
                }
            }
        }
        
    }
};
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int min_sum=1000;
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            
            while(j<k){
                if(abs(nums[i]+nums[j]+nums[k]-target)<abs(min_sum-target)){
                    min_sum=nums[i]+nums[j]+nums[k];
                }
                if(nums[i]+nums[j]+nums[k]==target){
                    return target;
                }
                else if(nums[i]+nums[j]+nums[k]<target)
                    j++;
                else 
                    k--;
            }
        }
        return min_sum;
    }
};
class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> nums;
        int ans;
        while(n>0)
        {
            nums.push_back(n%10);
            n=n/10;
        }
        reverse(nums.begin(),nums.end());
        int k,N=nums.size(),l;
        for(k=N-2;k>=0;k--)
        {
            if(nums[k]<nums[k+1])
                break;
        }
        if(k<0)
            ans=-1;
        else
        {
            for(l=N-1;l>k;l--)
            {
                if(nums[l]>nums[k])
                    break;
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+k+1,nums.end());
            long long val=0;
            for(int f=0;f<N;f++)
                val=val*10+nums[f];
            if(val>INT_MAX)
                ans=-1;
            else
                ans=(int) val;
        }
         return ans;  
    }
};
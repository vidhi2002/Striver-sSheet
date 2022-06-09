class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i =0;i<nums1.size();i++)
        {
            auto it=find(nums2.begin(),nums2.end(),nums1[i]);
            if(it!=nums2.end())
            {
                int j=it-nums2.begin(),k=j+1,val=-1;
                while(k<nums2.size())
                {
                    if(nums2[k]>nums2[j])
                    {
                        val=nums2[k];
                        break;
                    }
                    k++;                    
                }
                ans.push_back(val);
            }
        }
        return ans;
        
    }
};
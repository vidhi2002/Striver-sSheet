class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size(),ans=0;
        vector<vector<int>> t(n+1,vector<int> (m+1,0));
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(nums1[i-1]==nums2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                    ans=max(ans,t[i][j]);
                }
                else
                    t[i][j]=0;
            }
        }
        return ans;
    }
};
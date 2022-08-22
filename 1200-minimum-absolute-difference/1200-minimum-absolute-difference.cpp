class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        if(arr.size()==2)
        {
            ans.push_back(arr);
            return ans;
        }
        int val=INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
        {
            val=min(val,abs(arr[i]-arr[i+1]));
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            int left=i+1,right=arr.size()-1;
            while(left<=right)
            {
                int mid=(left+right)/2;
                if(abs(arr[mid]-arr[i])==val)
                {
                    ans.push_back({arr[i],arr[mid]});
                    break;
                }
                else if(abs(arr[mid]-arr[i])>val)
                    right=mid-1;
                else
                    left=mid+1;
            }
        }
        return ans;
    }
};
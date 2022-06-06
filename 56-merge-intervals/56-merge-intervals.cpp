class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() == 1)
            return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int i=0,j=1;
        while(j<intervals.size() && i<intervals.size()-1)
        {
            if(intervals[i][1]>=intervals[j][0]){
                intervals[i][1]=max(intervals[i][1],intervals[j][1]);
                //intervals.erase(intervals.begin()+i+1);
                j++;
            }
            else{
                ans.push_back(intervals[i]);
                i=j;
                j=i+1;
            }
        }
        ans.push_back(intervals[i]);
        return ans;
    }
};
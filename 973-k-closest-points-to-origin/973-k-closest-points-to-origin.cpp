class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> maxh;
        for(int i=0;i<points.size();i++)
        {
            int x=points[i][0],y=points[i][1];
            int r=x*x+y*y;
            maxh.push({r,{x,y}});
            if(maxh.size()>k)
                maxh.pop();
        
            
        }
        vector<vector<int>> ans;
        while(maxh.size()>0)
        {
            vector<int> v;
            v.push_back(maxh.top().second.first);
            v.push_back(maxh.top().second.second);
            ans.push_back(v);
            maxh.pop();
        }
        return ans;
    }
};
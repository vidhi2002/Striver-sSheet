class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        vector<int> ans;
        for(int i=0;i<q.size();i++)
        {
            int count=0;
            for(int j=0;j<p.size();j++)
            {
                int k=(q[i][0]-p[j][0])*(q[i][0]-p[j][0])+(q[i][1]-p[j][1])*(q[i][1]-p[j][1]);
                if(k<=q[i][2]*q[i][2])
                    count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
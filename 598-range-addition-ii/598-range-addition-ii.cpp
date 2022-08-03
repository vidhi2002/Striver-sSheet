class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0)
            return m*n;
        int minX=INT_MAX,minY=INT_MAX;
        for(int i=0;i<ops.size();i++)
        {
            minX=min(minX,ops[i][0]);
            minY=min(minY,ops[i][1]);
            
        }
        return minX*minY;
    }
};
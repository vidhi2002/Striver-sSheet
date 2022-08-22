bool cmp(vector<int>& a,vector<int>& b)
{
    return a[1]>b[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& a, int b) {
        sort(a.begin(),a.end(),cmp);
        int ans=0,r=b;
        for(int i=0;i<a.size();i++)
        {
            if(b==0)
                return ans;
            if(a[i][0]<b)
            {
                ans+=a[i][0]*a[i][1];
                b-=a[i][0];
            }
            else
            {
                ans+=b*a[i][1];
                b-=b;
            }
                
        }
        return ans;
    }
};
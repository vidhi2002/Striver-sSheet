class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        char c1=s[0],r1=s[1],c2=s[3],r2=s[4];
        for(char i=c1;i<=c2;i++)
        {
            for(char j=r1;j<=r2;j++)
            {
                string f="";
                f=f+i+j;
                ans.push_back(f);
            }
        }
        return ans;
    }
};
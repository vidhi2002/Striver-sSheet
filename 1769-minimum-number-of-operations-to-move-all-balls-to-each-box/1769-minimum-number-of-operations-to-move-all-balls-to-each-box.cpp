class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.length(),0);
        for(int i=0;i<boxes.length();i++)
        {
            if(boxes[i]=='1')
            {
                for(int j=0;j<boxes.length();j++)
                {
                    if(i!=j)
                        ans[j]+=abs(j-i);
                }
            }
        }
        return ans;
        
    }
};
class Solution {
public:
    static bool compare(const string& a,const string& b)
    {
        return a.length()<b.length();
    }
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end(),compare);
        int n=strs[0].length()-1,i=0;
        string ans="";
        while(n>=0)
        {
            char c=strs[0][i];
            int count=0;
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=c)
                    break;
                else
                    count++;
            }
            if(count<strs.size()-1)
                break;
            ans=ans+c;
            i++;
            n--;
        }
        return ans;
    }
};
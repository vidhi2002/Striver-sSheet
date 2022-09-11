class Solution {
public:
    vector<string> ans;
    void solve(string a,set<string> &s, int ind,string h)
    {
        
        if(ind>=a.length())
        {
            h.pop_back();
            ans.push_back(h);
            return;
        }
        string temp="";
        for(int i=ind;i<a.length();i++)
        {
            temp+=a[i];
            h.push_back(a[i]);
            if(s.find(temp)!=s.end())
            {
                h.push_back(' ');
                solve(a,s,i+1,h);
                h.pop_back();
            }
        }
        
    }
        
    vector<string> wordBreak(string a, vector<string>& wordDict) {
        set<string> s(wordDict.begin(),wordDict.end());
        solve(a,s,0,"");
        return ans;
    }
};
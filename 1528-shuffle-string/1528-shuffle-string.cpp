bool compare(pair<char,int> a,pair<char,int> b)
    {
        return a.second<b.second;
    }
class Solution {
    
public:
    
    string restoreString(string s, vector<int>& indices) {
        vector<pair<char,int>> v;
        for(int i=0;i<indices.size();i++)
            v.push_back(make_pair(s[i],indices[i]));
        sort(v.begin(),v.end(),compare);
        string ans="";
        for(int i=0;i<v.size();i++)
            ans+=v[i].first;
        return ans;
        
    }
};
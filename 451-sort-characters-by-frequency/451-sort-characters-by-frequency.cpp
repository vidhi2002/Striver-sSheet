class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(int i=0;i<s.length();i++)
                mp[s[i]]++;
        priority_queue<pair<int,int>> maxh;
        for(auto i: mp)
            maxh.push({i.second,i.first});
        string ans="";
        while(!maxh.empty())
        {
            auto it=maxh.top();
            maxh.pop();
            for(int i=0;i<it.first;i++)
                ans+=it.second;
        }
        return ans;
    }
};
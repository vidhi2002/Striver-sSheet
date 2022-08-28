class Solution {
public:
bool wordPattern(string pattern, string s) {
    vector<string> str;
    stringstream v(s);
    string word;
    while(v>>word)
        str.push_back(word);
    if(pattern.size()!=str.size())
        return false;
    unordered_map<char,string> mp;
    unordered_set<string> st;
    for(int i=0;i<str.size();i++)
    {
        if(mp.find(pattern[i])!=mp.end())
        {
            if(mp[pattern[i]]!=str[i])
                return false;
        }
        else
        {
            if(st.count(str[i])>0)
                return false;
            mp[pattern[i]]=str[i];
            st.insert(str[i]);
        }
    }
    return true;
}
};
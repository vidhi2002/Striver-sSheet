class Solution {
public:
bool wordPattern(string pattern, string s) {
vector<string> str;
string temp="";
for(int i=0;i<s.size();i++)
{
if(s[i]!=' ')
{
temp+=s[i];
}
else
{
str.push_back(temp);
temp="";
}
}
str.push_back(temp);
if(pattern.size()!=str.size())
return false;
unordered_map<char,string>mp;
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
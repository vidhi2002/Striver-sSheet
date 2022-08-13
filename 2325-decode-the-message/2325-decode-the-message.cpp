class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char> mp;
        char c='a';
        for(int i=0;i<key.length();i++)
        {
            if(key[i]!=' '){
                if(mp.find(key[i])==mp.end())
                {
                    mp[key[i]]=c;
                    c++;
                }
            }
        }
        string ans="";
        for(int i=0;i<message.length();i++)
        {
            if(message[i]==' ')
                ans=ans+" ";
            else
                ans=ans+mp[message[i]];
        }
        return ans;
    }
};
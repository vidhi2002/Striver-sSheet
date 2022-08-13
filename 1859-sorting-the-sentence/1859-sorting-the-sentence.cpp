class Solution {
public:
    string sortSentence(string s) {
        map<int,string> mp;
        string ans="";
        stringstream str(s);
        string word;
        while(str>>word)
        {
            string r=word.substr(0,word.length()-1);
            int n=word[word.length()-1]-'0';
            mp[n]=r;
        }
        int c=1;
        while(mp.find(c)!=mp.end())
        {
            ans=ans+mp[c]+" ";
            c++;
            
        }
        return ans.substr(0,ans.length()-1);
    }
};
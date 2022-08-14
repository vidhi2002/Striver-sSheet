class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> mp;
        for(int i=0;i<allowed.length();i++)
            mp[allowed[i]]++;
        int count=words.size();
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].length();j++)
            {
                if(mp.find(words[i][j])==mp.end())
                {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};
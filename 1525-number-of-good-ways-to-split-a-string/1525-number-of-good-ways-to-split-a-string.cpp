class Solution {
public:
    int numSplits(string s) {
        map<char,int> mp;
        vector<int> sofar;
        vector<int> fromback(s.length(),0);
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            sofar.push_back(mp.size());
        }
        mp.clear();
        for(int i=s.length()-1;i>=0;i--)
        {
            mp[s[i]]++;
            fromback[i]=mp.size();
        }
        int count=0;
        for(int i=0;i<sofar.size()-1;i++)
        {
            if(sofar[i]==fromback[i+1])
                count++;
        }
        return count;
        
    }
};
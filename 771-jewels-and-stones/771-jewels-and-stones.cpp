class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;
        for(int i=0;i<stones.size();i++)
            mp[stones[i]]++;
        int ans=0;
        for(int i=0;i<jewels.length();i++)
        {
            if(mp.find(jewels[i])!=mp.end())
                ans+=mp[jewels[i]];
        }
        return ans;
    }
};
class Solution {
public:
    bool digitCount(string num) {
        map<int,int> mp;
        for(int i=0;i<num.length();i++){
            int r=num[i]-'0';
            mp[r]++;
        }
        for(int i=0;i<num.length();i++)
        {
            int r=num[i]-'0';
            if(mp[i]!=r)
                return false;
        }
        return true;
    }
};
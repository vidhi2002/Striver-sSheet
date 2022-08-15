class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
       unordered_map<int, int> freq;
        
        for(int i: deck){
            freq[i]++;
        }
        auto it=freq.begin();
        int gcd=it->second;
        
        for(it++;it!=freq.end();it++){
            gcd=__gcd(gcd, it->second);
        }
        if(gcd==1)
            return false;
        return true;
    }
};

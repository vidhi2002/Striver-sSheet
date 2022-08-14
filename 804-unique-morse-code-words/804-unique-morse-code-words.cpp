class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> codes{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<string,int> mp;
        for(int i=0;i<words.size();i++)
        {
            string s="";
            for(int j=0;j<words[i].length();j++)
            {
                int x=words[i][j]-'0'-49;
                s+=codes[x];
            }
            mp[s]++;
        }
        return mp.size();
    }
};
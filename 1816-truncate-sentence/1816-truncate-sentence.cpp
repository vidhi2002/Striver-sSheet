class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream str(s);
        string word;
        vector<string> v;
        while(str>>word)
            v.push_back(word);
        string ans="";
        for(int i=0;i<k;i++)
        {
            if(i==k-1)
                ans+=v[i];
            else
                ans=ans+v[i]+" ";
        }
        return ans;
           }
};
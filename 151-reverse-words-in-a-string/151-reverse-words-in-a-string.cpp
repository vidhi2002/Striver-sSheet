class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string b="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
                b=b+s[i];
            else if(b.length()!=0){
                v.push_back(b);
                b="";
            }
        }
        if(b.length()!=0)
            v.push_back(b);
        b="";
        for(int i=v.size()-1;i>=0;i--)
        {
            if(i!=0)
                b=b+v[i]+' ';
            else
                b=b+v[i];
        }
        return b;
    }
};
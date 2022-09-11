bool cmp(string &a,string& b)
{
    return a.length()<b.length();
}

class Solution {
public:
    void solve(string a,set<string>& s,int ind,string h,bool& val,int q )
{
    if(ind>=a.length())
    {
        //cout<<"final:"<<h<<endl;
        if(h==a && q>1)
            val=true;
        return;
    }
    string temp="";
    for(int i=ind;i<a.length();i++)
    {
        temp+=a[i];
        if(s.find(temp)!=s.end())
        {
            //cout<<"From:"<<temp<<endl;
            h+=temp;
            q++;
            int n=temp.length();
            solve(a,s,i+1,h,val,q);
            h=h.substr(0,h.length()-n);
            q--;
           
        }
        //cout<<temp<<" ";
    }
}
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        sort(words.begin(),words.end(),cmp);
        set<string> s(words.begin(),words.end());
        int minsize=2*words[0].size();
        vector<string> ans;
        for(int i=2;i<words.size();i++)
        {
            
            if(words[i].length()>=minsize)
            {
                //cout<<words[i]<<" ";
                bool val=false;
                string h="";
                solve(words[i],s,0,h,val,0);
                if(val==true)
                    ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
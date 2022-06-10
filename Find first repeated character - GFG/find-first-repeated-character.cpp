// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    string r="";
    unordered_map<char,int> mp;
    mp[s[0]]++;
    for(int i=1;i<s.length();i++)
    {
        auto it=mp.find(s[i]);
        if(it==mp.end())
            mp[s[i]]++;
        else
        {
            string t="";
            t=t+s[i];
            return t;
        }
        
    }
    return "-1";
}
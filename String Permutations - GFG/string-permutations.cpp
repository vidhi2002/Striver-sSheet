// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void perm(string s,string p,vector<string>& v)
    {
        if(s.length()==0)
        {
            v.push_back(p);
            return;
        }
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            string l=s.substr(0,i);
            string r=s.substr(i+1);
            string g=l+r;
            perm(g,p+ch,v);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        string p="";
        perm(S,p,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}  // } Driver Code Ends
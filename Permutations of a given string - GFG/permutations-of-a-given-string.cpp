// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void find(string s,string p,vector<string>& ans)
	    {
	        if(s.length()==0)
	        {
	            ans.push_back(p);
	            return;
	        }
	        for(int i=0;i<s.length();i++)
	        {
	            char c=s[i];
	            string l=s.substr(0,i);
	            string r=s.substr(i+1);
	            string g=l+r;
	            find(g,p+c,ans);
	        }
	    }
	    
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    vector<string> ans;
		    string p="";
		    find(s,p,ans);
		    sort(ans.begin(),ans.end());
		    int i=0,j=1;
		    while(i<ans.size() && j<ans.size())
		    {
		        if(ans[j]==ans[i])
		            ans.erase(ans.begin()+j);
		      else
		      {
		          i=j;
		          j++;
		      }
		      
		    }
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends
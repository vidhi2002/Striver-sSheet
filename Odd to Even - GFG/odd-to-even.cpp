// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    string makeEven(string s)
   {
       int swapi=-1, swapivalue=INT_MAX,i;
       for(i=0; i<s.size(); i++)
        {
            if(!((s[i]-'0')&1))
             {
                 swapi=i;
                 if(s[s.size()-1]-'0' > s[i]-'0')
                  break;
             }
            
        }
        
        if (swapi>-1) swap(s[swapi], s[s.size()-1]);
        
        return s;
       
       
   }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    Solution ob;
	    cout<<ob.makeEven(str)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string ans="";
	    if(str.length()<=1)
	    {
	        ans=ans+str;
	        return ans;
	    }
	    unordered_map<char,int> mp;
	    for(int i=0;i<str.length();i++)
	    {
	        auto it=mp.find(str[i]);
	        if(it==mp.end())
	        {
	            mp[str[i]]++;
	            ans=ans+str[i];
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
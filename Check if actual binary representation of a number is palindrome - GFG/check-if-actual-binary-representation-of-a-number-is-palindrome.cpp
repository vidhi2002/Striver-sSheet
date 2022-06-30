// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	string to_binary(long long int N)
	{
	    string ans="";
	    while(N>0)
	    {
	        int r=N%2;
	        ans=to_string(r)+ans;
	        N=N/2;
	    }
	    return ans;
	}
	int binaryPalin (long long int N)
	{
	    // Your Code Here
	    string s=to_binary(N);
	    string p=s;
	    reverse(s.begin(),s.end());
	    if(s==p)
	        return 1;
	       return 0;
	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.binaryPalin (n) << endl;
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
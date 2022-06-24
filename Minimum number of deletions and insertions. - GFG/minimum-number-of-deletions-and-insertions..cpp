// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int lcs(string s1,string s2)
	{
	    int n=s1.length(),m=s2.length();
	    vector<vector<int>> t(n+1,vector<int> (m+1,0));
	    for(int i=1;i<n+1;i++)
	    {
	        for(int j=1;j<m+1;j++)
	        {
	            if(s1[i-1]==s2[j-1])
	                t[i][j]=1+t[i-1][j-1];
	            else
	                t[i][j]=max(t[i-1][j],t[i][j-1]);
	        }
	    }
	    return t[n][m];
	}
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int r=lcs(str1,str2);
	    //return r;
	    return (str1.length()-r)+(str2.length()-r);
	    
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
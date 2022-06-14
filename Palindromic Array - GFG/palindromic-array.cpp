// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/
#include<bits/stdc++.h>
class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++)
    	{
    	    string s=to_string(a[i]);
    	    string r=s;
    	    reverse(s.begin(),s.end());
    	    if(s!=r)
    	        return 0;
    	}
    	return 1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends
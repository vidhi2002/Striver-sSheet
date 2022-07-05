// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int n=str.length();
        int ans=0,j=0;
        if(str[0]=='-')
            j=1;
        for(int i=j;i<n;i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
               int r=str[i]-'0';
               ans=ans*10+r;
            }
            else
                return -1;
        }
        if(j==1)
            ans=0-ans;
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
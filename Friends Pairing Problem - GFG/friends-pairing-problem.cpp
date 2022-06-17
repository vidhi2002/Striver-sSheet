// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

#define ll long long
class Solution
{
public:
 
// Returns count of ways n people
// can remain single or paired up.

int countFriendsPairings(int n)
{
    int m=1000000007;
    vector<int> t(10001,-1);
    t[0]=0;
    t[1]=1;
    t[2]=2;
    for(ll i=3;i<=n;i++)
    {
        ll a=t[i-1]%m;
        ll b=(((i-1)%m)*(t[i-2]%m))%m;
        t[i]= (a+b)%m;
    }
    return t[n]%m;
    
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
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  // } Driver Code Ends
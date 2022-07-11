// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    bool solve(int n,unordered_map<int,int>&mp)
{
   int temp=n;
   int sum=0;
   mp[temp]++;
   while(temp)
   {
       int rem=temp%10;
       sum+=(rem*rem);
       temp/=10;
    }
    if(sum==1)
   return 1;
   else if(mp.find(sum)!=mp.end())
   return 0;
   return solve(sum,mp);
   }
   int nextHappy(int N)
   {
      int pos=1;
      int i=N+1;
     int  temp=i;
      while(pos)
      {
         temp=i;
         unordered_map<int,int>mp;
         if(solve(temp,mp))
         return i;
         i++;
      }
   }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
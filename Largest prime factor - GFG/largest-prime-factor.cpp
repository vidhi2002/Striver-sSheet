// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public: 
    bool isprime(int k)
{
   for(int i=2;i<=sqrt(k);i++)
       {
           if(k%i==0)
           return false;
       }
       return true;
}
int max=0;
   long long int largestPrimeFactor(int N){
       for(int i=2;i<=N;i++ )
       {
           if(isprime(i) && N%i==0 )
           {
               if(i>max)
               max=i;
           }
       }
      return max; 
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
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
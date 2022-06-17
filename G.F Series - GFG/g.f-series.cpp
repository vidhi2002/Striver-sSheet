// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
   
 void gf(vector<long long > & v,int n){
       if(n<3)return;
       gf(v,n-1);
       long long i=pow(v[n-3],2)-v[n-2];
       v.push_back(i);
       
   }
       
   void gfSeries(int N)
   {
       // Write Your Code here
       vector<long long> v;
       v={0,1};
       gf(v,N);
       for(int i=0;i<N;i++){
           cout<<v[i]<<" ";
       }
       cout<<endl;
   }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    vector <int> nFibonacci(int N){
        //code here
        if(N==1)
        {
            vector<int> a{0,1,1};
            return a;
        }
        vector<int> v;
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        int cur=1,i=3;
        while(cur<N)
        {
            if((v[i-1]+v[i-2])<=N){
                v.push_back(v[i-1]+v[i-2]);
                cur=v[i];
            }
            else
                cur=N+1;
            i++;
        }
        
        return v;
    }
    
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        vector <int> ans=ob.nFibonacci(N);
        for(int u:ans)
         cout<<u<<" ";
        cout<<"\n"; 
    }
}  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<long long> distributeCandies(int N, int K) {
        // code here
        vector<long long> v(K,0);
        int i=0,j=1;
        while(N>0)
        {
            if(N<j){
                v[i%K]+=N;
                break;
            }
            else
                v[i%K]+=j;
            N-=j;
            j++;
            i++;
        }
        return v;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N>>K;
        
        Solution ob;
        vector<long long> res = ob.distributeCandies(N,K);
        
        for(int i=0; i<res.size(); i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
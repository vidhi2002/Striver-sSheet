// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        //code here
        vector<int> v,ans(N,-1);
        int mini=Arr[N-1];
        for(int i=N-1;i>=0;i--)
        {
            if(i==N-1)
                v.push_back(i);
            else{
                for(int j=0;j<v.size();j++)
                {
                    if(Arr[v[j]]<Arr[i]){
                        ans[i]=v[j];
                        break;
                    }
                }
                if(Arr[i]<mini)
                {
                    v.push_back(i);
                    mini=Arr[i];
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends
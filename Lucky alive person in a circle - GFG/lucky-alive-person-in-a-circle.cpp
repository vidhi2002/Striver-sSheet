// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    void solve(vector<int>& v,int k,int index,int &ans)
    {
        if(v.size()==1)
        {
            ans=v[0];
            return;
        }
        index=(index+k)%v.size();
        v.erase(v.begin()+index);
        solve(v,k,index,ans);
    }
    int find(int N){
        // code here
        vector<int> v;
        for(int i=1;i<=N;i++)
            v.push_back(i);
        int ans;
        solve(v,1,0,ans);
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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
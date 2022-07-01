// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class t{
    public: 
    int n;
    int mini;
    int maxi;
    t(int n,int mini,int maxi)
    {
        this->n=n;
        this->mini=mini;
        this->maxi=maxi;
    }
};
class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        // code here
        stack<int> s;
        vector<int> ans;

        int leaf=0;
        int prev=0;
        for(int i=0;i<N;i++){
            while(!s.empty() && s.top()<arr[i]){
                leaf++;
                if(leaf==2){
                    ans.push_back(prev);
                }
                prev = s.top();
                s.pop();
            }
            leaf=0;
            s.push(arr[i]);
        }
        ans.push_back(s.top());
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
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
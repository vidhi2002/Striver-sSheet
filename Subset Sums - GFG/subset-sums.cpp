// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> sub(vector<int>& v,int N,int sum)
    {
        vector<int> ans;
        if(N==0){
            ans.push_back(sum);
            return ans;
        }
        
        int d=v[N-1];
        vector<int> l=sub(v,N-1,sum+d);
        vector<int> r=sub(v,N-1,sum);
        ans.insert(ans.end(),l.begin(),l.end());
        ans.insert(ans.end(),r.begin(),r.end());
        return ans;
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans=sub(arr,N,0);
        sort(ans.begin(),ans.end());
        return ans;
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
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
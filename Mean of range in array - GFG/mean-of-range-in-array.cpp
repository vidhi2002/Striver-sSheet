// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
     vector<int> findMean(int arr[],int queries[],int n,int q)
    {
        // Complete the function
        for(int i = 1; i<n; i++){
           arr[i] += arr[i-1];
       }
       vector<int> result;
       for(int i = 0; i < q; i += 2){
           int l = queries[i], r = queries[i+1];
           int sum;
           if(l == 0) sum = arr[r];
           else sum = arr[r]-arr[l-1];
           int mean = sum/(r-l+1);
           result.push_back(mean);
       }
       return result;
    }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n + 1],queries[2*q + 1];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<2*q;i++){
            cin>>queries[i];
        }

        vector<int> ans;
        Solution ob;
        ans = ob.findMean(arr,queries,n,2*q);

        for(int i:ans)
            cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}
  // } Driver Code Ends
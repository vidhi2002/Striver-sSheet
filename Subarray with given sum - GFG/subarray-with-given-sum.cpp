// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    /*void pop_front(vector<int>& v)
    {
        if (v.size() > 0) {
            v.erase(v.begin());
        }
    }*/
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int i=0,j=0,sum=0;
      while(i<n||j<n){
          if(sum==s) return {j+1,i};
          sum<s?sum+=arr[i++]:sum-=arr[j++];
    }
      return {-1};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
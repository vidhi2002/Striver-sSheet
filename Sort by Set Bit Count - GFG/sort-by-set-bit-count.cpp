// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int count_setbits(int x)
    {
        int count=0;
        while(x)
        {
            if(x&1) count++;
            x = x>>1;
        }
        return count;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        map<int,vector<int>,greater<int>>mp;
        for(int i=0;i<n;i++)
        {
            int bits = count_setbits(arr[i]);
            mp[bits].push_back(arr[i]);
        }
        int j=0;
        for(auto it:mp)
        {
            vector<int>v = it.second;
            for(int i=0;i<v.size();i++)
            {
                arr[j] = v[i];
                j++;
            }
        }
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
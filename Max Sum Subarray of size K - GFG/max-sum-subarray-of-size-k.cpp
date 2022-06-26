// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int n){
        // code here 
        int i=0,j=0,r=0;
        long long int sum=0,maxi=INT_MIN;
        while(j<n)
        {
            if(r<K)
            {
                sum+=arr[j];
                maxi=max(maxi,sum);
                j++;
                r++;
            }
            else if(r==K)
            {
                sum-=arr[i];
                i++;
                r--;
            }
        }
        return maxi;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends
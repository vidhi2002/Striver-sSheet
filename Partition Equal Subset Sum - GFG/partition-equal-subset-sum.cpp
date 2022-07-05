// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long summ(int arr[],int N)
    {
        long long sum=0;
        for(int i=0;i<N;i++)
            sum+=arr[i];
        return sum;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        long long sum=summ(arr,N);
        if(sum%2==0)
            sum=sum/2;
        else
            return 0;
        vector<vector<bool>> t(N+1,vector<bool> (sum+1,false));
        for(int i=0;i<N+1;i++)
            t[i][0]=true;
        for(int i=1;i<N+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                    t[i][j]=t[i-1][j-arr[i-1]]|| t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        if(t[N][sum]==true)
            return 1;
        return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends
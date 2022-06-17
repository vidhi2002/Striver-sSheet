// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int N){
        // code here
        int i=2;
        long long sum=1,count=0,j=2;
        while(i<=N)
        {
            long long ans=1;
            count=0;
            while(count<i)
            {
                ans=ans*j;
                j++;
                count++;
            }
            sum=sum+ans;
            i++;
        }
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}  // } Driver Code Ends
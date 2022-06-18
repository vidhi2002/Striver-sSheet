// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
	// Sort the array
       sort(Arr.begin(),Arr.end());
       
    // Find sum of all elements
       long long totalSum = 0;
       for(int i=0;i<N;i++){
           totalSum+=Arr[i];
       }
       
    // If all the elements in the array are 0, return N
       if(totalSum == 0) return N;
       
    // Calculate and check for minimum sum required
       long long minSum = 0;
       for(int j=N-1;j>=0;j--){
           minSum+=Arr[j];
           totalSum-=Arr[j];
           if(minSum>totalSum)
               return N-j;
       }
   }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends
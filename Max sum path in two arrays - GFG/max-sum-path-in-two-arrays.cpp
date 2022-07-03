// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
    int max_path_sum(int A[], int B[], int m, int n)
   {
       int i=0,j=0,sumA=0, sumB=0, maxSum=0;
       
       while(i<m && j<n){
           if(A[i]==B[j]){
               sumA+=A[i];
               sumB+=B[j];
               maxSum+=max(sumA,sumB);
               sumA=0; 
               sumB=0;
               i++;
               j++;
           }
           else if(A[i]<B[j]){
               sumA+=A[i];
               i++;                
           }
           else{
               sumB+=B[j];
               j++;                
           }
       }
       
       while(i<m){
           sumA+=A[i];
           i++;
       }
       
       while(j<n){
           sumB+=B[j];
           j++;
       }
       
       maxSum+=max(sumA,sumB);
       
       return maxSum;
   }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}

  // } Driver Code Ends
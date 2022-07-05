// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for C


// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.
long long int merge(long long arr[],long long t[],long long left,long long right,long long mid)
    {
        long long i=left,j=mid,k=left;
        long long int count=0;
        while((i<=mid-1)&& (j<=right))
        {
            if(arr[i]<=arr[j])
            {
                t[k++]=arr[i++];
            }
            else
            {
                t[k++]=arr[j++];
                count+=(mid-i);
            }
        }
        while(i<=mid-1)
        {
            t[k++]=arr[i++];
        }
        while(j<=right)
        {
            t[k++]=arr[j++];
        }
        for(long long i=left;i<=right;i++)
        {
            arr[i]=t[i];
        }
        return count;
    }
    long long int mer(long long arr[],long long t[],long long left,long long right)
    {
        long long int count=0;
        long long mid;
        if(right>left)
        {
            mid=(left+right)/2;
            count+=mer(arr,t,left,mid);
            count+=mer(arr,t,mid+1,right);
            count+=merge(arr,t,left,right,mid+1);
        }
        return count;
    }
    long long int mergesor(long long arr[],long long n)
    {
        long long t[n];
        return mer(arr,t,0,n-1);
    }
    long long int inversionCount(long long arr[], long long n)
    {
        long long int c=mergesor(arr,n);
        return c;
    }

// { Driver Code Starts.

int main() {
    
    long long T;
    scanf("%ld", &T);
    
    while(T--){
        long long N;
        scanf("%ld", &N);
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            scanf("%ld", &A[i]);
        }
        
        printf("%ld\n", inversionCount(A,N) );
    }
    
    return 0;
}
  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
        if(N==1)
            return 1;
        if(N==2 && arr[1]-arr[0]==1)
            return 2;
        else if(N==2 && arr[1]-arr[0]!=1)
            return 1;
        sort(arr,arr+N);
        int length=0,count=1;
        int i=1,val=arr[0]+1,prev=arr[0];
        while(i<N)
        {
            if(arr[i]==val){
                prev=val;
                val++;
                i++;
                count++;
            }
            else if(arr[i]==prev)
                i++;
            else
            {
                val=arr[i];
                length=max(length,count);
                count=0;
            }
            
        }
        length=max(length,count);
        return length;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
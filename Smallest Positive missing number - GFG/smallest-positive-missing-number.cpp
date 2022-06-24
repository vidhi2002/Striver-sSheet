// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        if(n==1)
        {
            if(arr[0]==1)
                return 2;
            else
                return 1;
                
        }
        sort(arr,arr+n);
        int i=0;
        while(arr[i]<=0)
            i++;
        int b=1,pre=b;
        for(int k=i;i<n;k++)
        {
            if(arr[k]!=b && arr[k]!=pre)
                return b;
            else if(arr[k]==b)
            {
                pre=b;
                b++;
            }
        }
        return b+1;
    } 
    /*85
-47 1 4 49 -18 10 26 18 -11 -38 -24 36 44 -11 45 20 -16 28 17 -49 47 -48 -33 42 2 6 -49 30 36 -9 15 39 -6 -31 -10 -21 -19 -33 47 21 31 25 -41 -23 17 6 47 3 36 15 -44 33 -31 -26 -22 21 -18 -21 -47 -31 20 18 -42 -35 -10 -1 46 -27 -32 -5 -4 1 -29 5 29 38 14 -22 -9 0 43 -50 -16 14 -26*/
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
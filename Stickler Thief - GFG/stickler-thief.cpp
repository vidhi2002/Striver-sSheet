// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.

    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int prev=arr[0],prev2=0;
        for(int i=1;i<n;i++)
        {
            int take=arr[i];
            if(i>1)
                take+=prev2;
            int nottake=0+prev;
            int cur=max(take,nottake);
            prev2=prev;
            prev=cur;
        }
        return prev;
        
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
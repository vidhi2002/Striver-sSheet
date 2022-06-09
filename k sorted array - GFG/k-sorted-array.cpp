// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
typedef pair<int,int> ppl;
class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        int p=0,check=0;
        priority_queue<ppl,vector<ppl>,greater<ppl>> minh;
        for(int i=0;i<n;i++)
        {
            minh.push({arr[i],i});
            /*if(minh.size()>k)
            {
                int r=abs(minh.top().second-p);
                if(r>k)
                {
                    check=1;
                    break;
                }
                p++;
                minh.pop();
            }*/
        }
        while(minh.size()>0)
        {
            int r=abs(minh.top().second-p);
            if(r>k)
            {
                check=1;
                break;
            }
            p++;
            minh.pop();
        }
        if(check==0)
            return "Yes";
        else
            return "No";
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}  // } Driver Code Ends
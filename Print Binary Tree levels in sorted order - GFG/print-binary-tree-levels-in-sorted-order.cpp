// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int a[], int n)
    {
        // Your code here
        int x=0;
       vector <vector <int>> ans;
       for(int i=0;i<n;){
           int s=pow(2,x);
           vector <int> v;
           while(s-- && i<n ){
               v.push_back(a[i]);
               i++;
           }
           x++;
           sort(v.begin(),v.end());
           ans.push_back(v);
           v.clear();
       }
       return ans;


        
    }
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

        Solution ob;
        
		vector <vector <int>> res = ob.binTreeSortedLevels (arr, n);
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[i].size(); ++j)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}

// Contributed By: Pranay Bansal  // } Driver Code Ends
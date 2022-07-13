// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    vector<int> smallestDifferenceTriplet(int arr1[], int arr2[], int arr3[], int n)
    {
        sort(arr1, arr1+n);
        sort(arr2, arr2+n);
        sort(arr3, arr3+n);
        int diff = INT_MAX;
        int a = 0, b = 0, c = 0, x = 0, y = 0, z = 0;
        while(a<n && b<n && c<n){
            int mn = min({arr1[a], arr2[b], arr3[c]});
            int mx = max({arr1[a], arr2[b], arr3[c]});
            int d = mx-mn;
            if(d < diff){
                diff = d;
                x = arr1[a];
                y = arr2[b];
                z = arr3[c];
            }
            if(arr1[a] == mn)
                a += 1;
            else if(arr2[b] == mn)
                b += 1;
            else
                c += 1;
        }
        vector <int> v{x, y, z};
        sort(v.begin(), v.end(), greater<int>());
        return v;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],c[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		for(int i=0;i<n;++i)
			cin>>b[i];
		for(int i=0;i<n;++i)
			cin>>c[i];
		
		Solution ob;	
		vector<int> ans=ob.smallestDifferenceTriplet(a,b,c,n);
		cout<< ans[0] <<" "<<ans[1]<<" "<<ans[2] << endl;
	}
	return 0;
}
  // } Driver Code Ends
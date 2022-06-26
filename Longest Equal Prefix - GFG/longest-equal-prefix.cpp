// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int findIndex(int arr[], int X, int Y, int n);


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y;
		cin>>n>>x>>y;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		cout<<findIndex(a,x,y,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends



int findIndex(int arr[], int X, int Y, int N)
{
    // Your code goes here
    int countx=0,county=0,prefix=-1;
    for(int i=0;i<N;i++)
    {
        if(arr[i]==X) countx++;
        if(arr[i]==Y) county++;
        if(countx==county && countx!=0)
            prefix=i;
    }
    if(prefix==-1)
        return -1;
    return prefix;
}
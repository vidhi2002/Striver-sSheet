#include <bits/stdc++.h>
using namespace std;
vector<int> sOrt(vector<int>& arr,int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> minh;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        minh.push(arr[i]);
        if(minh.size()==k)
        {
            ans.push_back(minh.top());
            minh.pop();
        }
    }
    while(minh.size()>0)
    {
        ans.push_back(minh.top());
        minh.pop();
    }
    return ans;
}
int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> arr,ans;
	    for(int j=0;j<n;j++)
	    {
	        int r;
	        cin>>r;
	        arr.push_back(r);
	    }
	    ans=sOrt(arr,n,k);
	    for(int j=0;j<n;j++)
	        cout<<ans[j]<<" ";
	   cout<<endl;
	}
	return 0;
}
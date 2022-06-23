// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	vector<vector<int>> vec = uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/
vector<vector<int>> uniqueRow(int arr[MAX][MAX],int row,int col)
{
//Your code here
    map<vector<int>,int> mp;
    vector<vector<int>> ans;
    for(int i=0;i<row;i++)
    {
        vector<int> tmp;
        for(int j=0;j<col;j++)
            tmp.push_back(arr[i][j]);
        if(mp.find(tmp)==mp.end()){
            mp[tmp]++; 
            ans.push_back(tmp);
        }
        
    }
    return ans;
}

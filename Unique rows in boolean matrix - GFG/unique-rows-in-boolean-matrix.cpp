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
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
//Your code here
    vector<vector<int>> ans;
unordered_map<int,int> u1;
set<int> u2;
int sum = 0;
for(int i=0;i<row;i++){
   sum = 0;
   for(int j=0;j<col;j++){
       sum = sum + M[i][j]*pow(2,j);
   }
   auto it = u1.find(sum);
   if(it != u1.end()){
       continue;
   }
   else{
       u1.insert({sum,i});
   }
}
for(auto it = u1.begin();it != u1.end();it++){
   u2.insert(it->second);
}
for(auto it = u2.begin();it != u2.end();it++){
   vector<int> row1;
   for(int j=0;j<col;j++){
       row1.push_back(M[(*it)][j]);
   }
   ans.push_back(row1);
}
return ans;
}
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool check(int src,vector<int> adj[],vector<int>& visited)
    {
	    queue<int> q;
	    visited[src]=0;
	    q.push(src);
	    while(!q.empty())
	    {
	        int node=q.front();
	        q.pop();
	        for(auto it: adj[node])
	        {
	            if(visited[it]==-1)
	            {
	                visited[it]=1-visited[node];
	                q.push(it);
	            }
	            else if(visited[it]==visited[node])
	                return false;
	        }
	    }
	    return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> visited(V,-1);
	    queue<int> q;
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==-1)
	        {
	            if(!check(i,adj,visited))
	                return false;
	        }
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends
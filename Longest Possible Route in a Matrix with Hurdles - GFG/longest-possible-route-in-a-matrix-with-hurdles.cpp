// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    public:
    int mx=-1;
    void helper(int sr,int sc,int dr,int dc,vector<vector<int>> &matrix,int steps){
        if(sr<0 || sc<0 || sr>=matrix.size() || sc>=matrix[0].size() || matrix[sr][sc]==0) return;
        if(sr==dr && sc==dc){
            mx=max(steps,mx);
            return;
        }
        matrix[sr][sc]=0;
        helper(sr-1,sc,dr,dc,matrix,steps+1);
        helper(sr,sc+1,dr,dc,matrix,steps+1);
        helper(sr+1,sc,dr,dc,matrix,steps+1);
        helper(sr,sc-1,dr,dc,matrix,steps+1);
        matrix[sr][sc]=1;
    }
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        // code here5
        helper(xs,ys,xd,yd,matrix,0);
        return mx;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
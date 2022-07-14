// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void fun1(vector<vector<int>>& v, vector<int>& v1, int c, int n, unordered_set<int>& row, unordered_set<int>& lb, unordered_set<int>& ub)
   {
       if(c==n)
       {
           v.push_back(v1);
           return;
       }
       for(int i=0;i<n;i++)
       {
           if(row.find(i)==row.end() && lb.find(i+c)==lb.end() && ub.find(c-i)==ub.end())
           {
               v1.push_back(i+1);
               row.insert(i);
               lb.insert(i+c);
               ub.insert(c-i);
               fun1(v,v1,c+1,n,row,lb,ub);
               v1.pop_back();
               row.erase(i);
               lb.erase(i+c);
               ub.erase(c-i);
           }
       }
   }
   vector<vector<int>> nQueen(int n) {
       vector<vector<int>>v;
       vector<int>v1;
       unordered_set<int>row,lb,ub;
       fun1(v,v1,0,n,row,lb,ub);
       return v;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends
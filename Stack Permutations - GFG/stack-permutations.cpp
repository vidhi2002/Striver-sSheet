// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        if(N==1)
        {
            if(A[0]==B[0])
                return 1;
            else
                return 0;
        }
        stack<int> st;
        vector<int> v;
        int i=0,j=0;
        while(i<N && j<N)
        {
            st.push(A[i]);
            i++;
            while(!st.empty() && st.top()==B[j]){
                v.push_back(st.top());
                st.pop();
                j++;
            }
            
        }
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        if(v==B)
            return 1;
        return 0;
        
        
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        Solution ob;
        cout<<ob.isStackPermutation(n,a,b)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends
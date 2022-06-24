// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    vector<int> fib()
    {
        vector<int> v(101,0);
        v[1]=1;
        v[2]=1;
        for(int i=3;i<101;i++)
            v[i]=v[i-1]+v[i-2];
        return v;
    }
    string checkFibonacci(int N){
        // code here 
        vector<int> v=fib();
        if(find(v.begin(),v.end(),N)!=v.end())
            return "Yes";
        else
            return "No";
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends
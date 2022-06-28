// { Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        if(n==1)
            return 0;
        int steps=0;
        while(n>1)
        {
            if(n%3==0 && n>1)
                n=n/3;
            else
                n=n-1;
            steps++;
        }
        return steps;
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
        cin >> n;
        Solution ob;
        cout << ob.minimumStep(n) << endl;
    
    }
    return 0; 
} 

  // } Driver Code Ends
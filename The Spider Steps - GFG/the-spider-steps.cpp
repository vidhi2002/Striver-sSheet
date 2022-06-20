// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minStep(int H, int U, int D){
        // code here
        int steps=0,count=0;
        while(count<H)
        {
            count=count+U;
            steps++;
            if(count>H)
                return steps;
            else
                count-=D;
        }
        return steps;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int H, U, D;
        cin >> H >> U >> D;
        
        Solution ob;
        cout<<ob.minStep(H, U, D)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
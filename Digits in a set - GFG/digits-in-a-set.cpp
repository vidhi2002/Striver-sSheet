// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool check(int n)
    {
        while(n>0)
        {
            int r=n%10;
            if(r>0 && r<6)
                n=n/10;
            else
                return false;
        }
        return true;
    }
    int countNumbers(int n) {
        // code hereunorde
        int count =0;
        for(int i=1;i<=n;i++)
        {
            if(check(i))
                count++;
        }
        return count;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countNumbers(n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for Java
class Solution {
    public:
    string to_binary(unsigned int N)
    {
        string ans="";
        while(N>0)
        {
            int r=N%2;
            ans=to_string(r)+ans;
            N=N/2;
        }
        return ans;
    }
    bool isPalindrome(string s)
    {
        string p=s;
        reverse(s.begin(),s.end());
        if(p==s)
            return true;
        return false;
    }
    string isDeciBinPalin(unsigned int  N){
        // code here
        string s=to_string(N);
        string p=to_binary(N);
        if(isPalindrome(s)==true && isPalindrome(p)==true)
            return "Yes";
        return "No";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned int N;
        cin >> N;
        Solution ob;
        cout<<ob.isDeciBinPalin(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
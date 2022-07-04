// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    int differenceSeries(int N)
    {
        // Write Your Code here
        if(N==1)
            return 3;
        if(N==2)
            return 10;
        int p1=3,p2=10;
        for(int i=3;i<=N;i++)
        {
            int cur=abs(p2-p1)+4;
            p1=p2;
            p2=p2+cur;
        }
        return p2;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        int ans = ob.differenceSeries(N);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
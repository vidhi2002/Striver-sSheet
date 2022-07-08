// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool isPrime(int n)
    {
        if(n<=1)
            return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    int maxDigit(int L, int R)  {
        // code here
        map<int,int> mp;
        for(int i=L;i<=R;i++)
        {
            if(isPrime(i))
            {
                int r=i;
                while(r>0)
                {
                    mp[r%10]++;
                    r=r/10;
                }
            }
        }
        //char c;
        int maxi=INT_MIN,ans=-1;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            //cout<<it->first<<" "<<it->second<<endl;
            if(it->second>maxi)
            {
                maxi=it->second;
                ans=it->first;
            }
            else if(it->second==maxi)
                ans=max(ans,it->first);
        }
        //int ans=c-'0';
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.maxDigit(L,R)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
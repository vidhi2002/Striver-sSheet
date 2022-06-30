// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> printMissingIntervals(int a[], int n) {
        // code here
        vector<int> ans;
        if(n==0)
        {
            ans.push_back(0);
            ans.push_back(99999);
            return ans;
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==k && k==99999){
                k++;
                break;
            }
            else if(a[i]==k)
                k++;
            else
            {
                ans.push_back(k);
                ans.push_back(a[i]-1);
                k=a[i]+1;
            }
        }
        if(k<=99999)
        {
            ans.push_back(k);
            ans.push_back(99999);
        }
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        Solution ob;
        vector<int> vec = ob.printMissingIntervals(a,n);
        
        for(int i=0 ; i<vec.size() ; i+=2)
        {
            if (vec[i]==vec[i+1])
                cout<<vec[i];
            else
                cout<<vec[i]<<"-"<<vec[i+1];
            if(i!=vec.size()-2)
                cout<<",";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        //code here.
        vector<int> ans;
        set <int> st; // num. of distinct
        map <int,int> mp;
        
        for(int i=0;i<k;i++) {
            mp[a[i]]++; // 2 1 1
            st.insert(a[i]); // 1 2 3
        }
        ans.push_back(st.size()); // 3
        
        for(int i=k;i<n;i++) {
            mp[a[i-k]]--;
            
            if(mp[a[i-k]] == 0) {
                st.erase(a[i-k]);
                mp.erase(a[i-k]);
            }
            
            mp[a[i]]++;
            st.insert(a[i]);
            ans.push_back(st.size());
            
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    static bool compare(string a,string b)
    {
        return a.length()<b.length();
    }
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr,arr+N,compare);
        string ans="";
        for(int i=0;i<arr[0].length();i++)
        {
            int count=0;
            for(int j=0;j<N;j++)
            {
                if(arr[0][i]==arr[j][i])
                    count++;
                else
                    break;
            }
            if(count==N)
                ans=ans+arr[0][i];
            else
                break;
        }
        if(ans.length()==0)
            return "-1";
        else
            return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
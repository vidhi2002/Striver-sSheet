// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        stringstream data(s);
        string ans="";
        vector<string> a;
        while(data)
        {
            string str;
            getline(data,str,'.');
            a.push_back(str);
        }
        for(int i=a.size()-2;i>=0;i--)
        {
            if(i>0)
                ans=ans+a[i]+'.';
            else
                ans=ans+a[i];
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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
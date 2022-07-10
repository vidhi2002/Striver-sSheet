// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int count=0,prev;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                count++;
                prev=a[i];
                v.push_back(a[i]);
            }
            else
            {
                if(a[i]!=prev)
                {
                    count++;
                    prev=a[i];
                    v.push_back(a[i]);
                }
                
            }
            
        }
        for(int i=0;i<count;i++)
            a[i]=v[i];
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& a, int n) 
    {
        // code here 
         int i=0,j=n-1,cel,count=0;
       while(j>=0 && i<=n-1)
       {
           if(a[i][j]==0)
           {
               if((i==j && a[j][i]==0) ||(i!=j && a[j][i]==1))
               {  
                  count++;
                  cel=i;
                  j--;
               } 
               else
               {
                   count=0;
                   i++;
                   j=n-1;
               }

           }
           else if(a[i][j]==1)
           {
               count=0;
               i++;
               j=n-1;
           }
       }
       if(count==n)//means total n elements of a row is 0 
          return cel;
       return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends
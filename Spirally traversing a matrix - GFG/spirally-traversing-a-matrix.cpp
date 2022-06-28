// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int k, int c) 
    {
        // code here 
        int size=k*c;
        int l=c-1,r=0,d=k-1,u=1;
        int t=0,i=0,j=0,jack=1;
        vector<int> ans;
        while(size--)
        {
            if(jack==1 && j<=l-t)
            {
                ans.push_back(matrix[i][j]);
                j++;
                if(j==l+1-t)
                {
                    jack=2;
                    j--;
                    i++;
                }
            }
            else if(jack==2 && i<=d-t)
            {
                ans.push_back(matrix[i][j]);
                i++;
                if(i==d-t+1)
                {
                    jack=3;
                    i--;
                    j--;
                }
            }
            else if(jack==3 && j>=r+t)
            {
                ans.push_back(matrix[i][j]);
                j--;
                if(j==r+t-1)
                {
                    jack=4;
                    j++;
                    i--;
                }
            }
            else if(jack==4 && i>=u+t)
            {
                ans.push_back(matrix[i][j]);
                i--;
                if(i==u+t-1)
                {
                    jack=1;
                    i++;
                    j++;
                    t++;
                }
            }
        }
        return ans;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
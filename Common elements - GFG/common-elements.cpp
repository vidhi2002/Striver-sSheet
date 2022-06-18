// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
       {
           //code here.
           int p = 0,q=0,r=0;
           vector<int> v;
           while(p<n1 and q<n2 and r<n3){
               
               if(A[p]==B[q] and B[q]==C[r] ){
                   if(v.empty() or v.back()!=A[p])
                       v.push_back(A[p]);
                   p++;
                   q++;
                   r++;
               }else if(A[p]<B[q] and A[p]<C[r])
                   p++;
               else if(B[q]<A[p] and B[q]<C[r])
                   q++;
               else if(C[r]<A[p] and C[r]<B[q])
                   r++;
               else if(A[p]==B[q] and A[p]<C[r])
                   p++,q++;
               else if(A[p]==C[r] and A[p]<B[q])
                   p++,r++;
               else if(B[q]==C[r] and B[q]<A[p])
                   q++,r++;
               
               
           }
           
           if(v.size()==0)
               return {-1};
           return v;
       }
};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
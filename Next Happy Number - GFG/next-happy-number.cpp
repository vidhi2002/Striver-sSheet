// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    bool squares(int N)
    {
        while(N)
        {
            int sum=0;
            while(N>0)
            {
                sum+=(N%10)*(N%10);
                N=N/10;
            }
            N=sum;
            if(N<10)
                break;
        }
        if(N==1)
            return true;
        return false;
    }
    int nextHappy(int N){
        // code here
        while(true)
        {
            N++;
            if(squares(N))
                return N;
            }
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
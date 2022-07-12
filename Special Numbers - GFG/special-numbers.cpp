// { Driver Code Starts
#include <iostream>
using namespace std;

 // } Driver Code Ends

class Solution
{
    
public:
    
    int getSpecialNumber(int N)
    {
        N--;
        int x=1,ans=0;
        while(N){
            ans = x*(N%6) + ans;
            N/=6;
            x*=10;
        }
        return ans;
    }

};



// { Driver Code Starts.

int main() 
{
	int t;
	cin>>t;
	while(t-->0)
	{
	    int N;
	    cin>> N;
	     Solution ob;
	    cout<<ob.getSpecialNumber(N)<<endl;
	}
	
	return 0;
}  // } Driver Code Ends
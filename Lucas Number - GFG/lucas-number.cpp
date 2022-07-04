// { Driver Code Starts
#include <iostream>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
        long long lucas(int n)
        {
            //code here.
            if(n==0)
                return 2;
            if(n==1)
                return 1;
            long long p1=2,p2=1;
            for(int i=2;i<n+1;i++)
            {
                long long cur=(p1+p2)%1000000007;
                p1=p2;
                p2=cur;
            }
            return p2;
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
		Solution ob;
		cout<<ob.lucas(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
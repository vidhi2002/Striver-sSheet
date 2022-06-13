// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isRepeat(string s)
	{
	    // Your code goes here
	    int check=0,i=1;
	    while(i<=(s.length()+1)/2 && check==0)
	    {
	        string k=s.substr(0,i);
	        string l=s.substr(i);
	        if(l.length()%k.length()==0)
	        {
	            while(l.length()>0)
	            {
	                string m=l.substr(0,i);
	                if(m!=k)
	                    break;
	                else
	                    l=l.substr(i);
	                if(l.length()==0)
	                    check=1;
	             
	            }
	        }
	        i++;
	    }
	    return check;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
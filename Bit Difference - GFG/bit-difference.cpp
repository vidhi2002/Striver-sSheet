// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
  string convert(int num)
{
    string str;
      while(num){
      if(num & 1) // 1
        str+='1';
      else // 0
        str+='0';
      num>>=1; // Right Shift by 1 
    }   
    reverse(str.begin(),str.end());
      return str;
}
    int countBitsFlip(int a, int b){
        
        // Your logic here
        string A=convert(a),B=convert(b);
        int n1=A.length(),n2=B.length();
        int r=abs(n1-n2);
        if(r!=0)
        {
            string z="";
            for(int i=0;i<r;i++)
                z=z+'0';
            if(n1>n2)
                B=z+B;
            else
                A=z+A;
        }
        int count=0,i=0;
        n1=A.length(),n2=B.length();
        while(i<n1)
        {
            if(A[i]!=B[i])
                count++;
            i++;
        }
        return count;
        
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends
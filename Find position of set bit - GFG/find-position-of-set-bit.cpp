// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
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
    int findPosition(int N) {
        // code here
        string s=convert(N);
        int count=0,index=0,j=1;
        int i=s.length()-1;
        while(i>=0)
        {
            if(s[i]=='1'){
                count++;
                if(count==1)
                    index=j;
            }
            if(count>1)
                return -1;
            i--;
            j++;
        }
        if(count==0)
            return -1;
        else
            return index;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
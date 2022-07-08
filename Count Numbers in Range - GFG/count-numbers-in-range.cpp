// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
   int prime(int num) {
       int i,limit;
       limit = sqrt(num);
       
       if (num==1) return 0;
       if (num==2) return 1;
       
       for (i=2; i<=limit; i++) {
           if (num%i==0) {
               return 0;
           }
       }
       
       if (i>limit) {
           return 1;
       }
   }
   
   int count3DivNums(long long L, long long R) {
       long long int a = sqrt(L)+1,b = sqrt(R),i;
       int count=0;
       for (i=a; i<=b; i++) {
           if (prime(i)) {
               count++;
           }
       }
       
       return count;
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long L,R;
        
        cin>>L>>R;

        Solution ob;
        cout << ob.count3DivNums(L,R) << endl;
    }
    return 0;
}  // } Driver Code Ends
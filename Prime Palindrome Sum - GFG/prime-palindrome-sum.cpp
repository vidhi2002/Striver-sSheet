// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool cheak(int n){
        if(n==1){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    bool palidrome(int n){
        int no=n;
        int ans=0;
        while(n>0){
            ans=ans*10+n%10;
            n/=10;
        }
        if(no==ans){
            return true;
        }else{
            return false;
        }
    }
    long long getPPS(int a, int b) {
        // code here
        long long sum=0;
        for(int i=a;i<=b;i++){
            if(cheak(i)==true && palidrome(i)==true){
                sum+=i;
            }
        }
        return sum;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.getPPS(a,b) << endl;
    }
    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int ans,k=0;
    while(n>0)
    {
        int r=n%10;
        if(r==0)
            r=5;
        ans=ans+r*pow(10,k);
        k++;
        n=n/10;
    }
    return ans;
}
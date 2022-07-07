// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  bool canShip(int arr[],int N,int D,long long capacity)
  {
      long long days=1,cur=0;
      for(int i=0;i<N;i++)
      {
          cur+=arr[i];
          if(cur>capacity)
          {
              days++;
              cur=arr[i];
          }
      }
      return days<=D;
  }
  long long summ(int arr[],int N)
  {
      long long sum=0;
      for(int i=0;i<N;i++)
        sum+=arr[i];
    return sum;
  }
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        long long left=*max_element(arr,arr+N),right=summ(arr,N);
        while(left<right)
        {
            long long mid=left+(right-left)/2;
            if(canShip(arr,N,D,mid))
                right=mid;
            else
                left=mid+1;
        }
        return right;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends
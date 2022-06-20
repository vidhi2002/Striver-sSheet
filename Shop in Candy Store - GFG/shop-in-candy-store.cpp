// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        int i=0,j=N,p=-1,q=N-1;
        sort(candies,candies+N);
        int minC=0,maxC=0;
        while(i<j)
        {
            minC+=candies[i];
            for(int l=0;l<K;l++){
                if(j>i)
                    j--;
                else
                    break;
            }
            i++;
            
        }
        while(p<q)
        {
            maxC+=candies[q];
            for(int l=0;l<K;l++)
            {
                if(p<q)
                    p++;
                else
                    break;
            }
            q--;
        }
        vector<int> ans;
        ans.push_back(minC);
        ans.push_back(maxC);
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends
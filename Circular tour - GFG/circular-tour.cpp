// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int totalP=0,totalD=0;
       for(int i=0;i<n;i++){
        totalP+=p[i].petrol;
        totalD+=p[i].distance;
       }
       if(totalD>totalP)
        return -1;
        int c=0,curP=0,curD=0;
        for(int i=0;i<n;i++)
        {
            curP+=p[i].petrol;
            curD+=p[i].distance;
            if(curD>curP)
            {
                curD=0;
                curP=0;
                c=i+1;
            }
        }
        return c;
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
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends
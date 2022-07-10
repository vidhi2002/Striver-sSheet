// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


bool decode (string S)
{
    // your code here
    string s="";
    int check=1;
    for(int i=0;i<S.length();i++)
    {
        if(check==1 && S[i]=='h')
        {
            s+='h';
            check=2;
        }
        else if(check==2 && S[i]=='e')
        {
            s+='e';
            check=3;
        }
        else if(check==3 && S[i]=='l')
        {
            s+='l';
            check=4;
        }
        else if(check==4 && S[i]=='l')
        {
            s+='l';
            check=5;
        }
        else if(check==5 && S[i]=='o')
        {
            s+='o';
            check=6;
            break;
        }
    }
    if(s=="hello")
        return true;
    return false;
}
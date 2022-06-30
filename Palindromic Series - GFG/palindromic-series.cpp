// { Driver Code Starts
#include<bits/stdc++.h>
#include<string>

using namespace std;

bool pallan(int n);


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin >> n;
        
            
        if(pallan(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}// } Driver Code Ends


bool pallan(int n){
    
    // Complete the function
    
    vector<string> v{"a","b","c","d","e","f","g","h","i","j"};
    long long int sum=0;
    string s="";
    while(n>0)
    {
        int r=n%10;
        sum+=r;
        s=v[r]+s;
        n=n/10;
    }
    //cout<<sum<<" "<<s<<endl;
    int k=s.length();
    int a=sum%k;
    long long int b=sum/k;
    string S="";
    //cout<<a<<" "<<b<<endl;
    for(int i=0;i<b;i++)
        S=S+s;
    for(int i=0;i<a;i++)
        S=S+s[i];
    //cout<<S<<endl;
    string P=S;
    reverse(S.begin(),S.end());
    if(S==P)
        return true;
    return false;
    
}

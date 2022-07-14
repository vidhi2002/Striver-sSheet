// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}
// } Driver Code Ends


/*You have to complete this function*/
void helper(string s,string p,int pos,vector<string>& ans)
{
    if(pos==s.length()-1)
    {
        p=p+s[pos];
        ans.push_back(p);
        return;
    }
    string a="",b="";
    a=a+s[pos];
    b=b+s[pos]+" ";
    helper(s,p+a,pos+1,ans);
    helper(s,p+b,pos+1,ans);
}
vector<string>  spaceString(char str[])
{
//Your code here
    string s(str);
    string p="";
    vector<string> ans;
    helper(s,p,0,ans);
    return ans;
    
}
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
     void fun(string& ans,string& s,int& i,bool& f,char& c){
        if(i==s.length()){
            if(ans.size() and c!='?') ans.pop_back();
            
            return;
        }
        
        if(ans.size() and ans.back() == s[i]){
            c = s[i];
            f = true;
            i++;
        }else if(c != '?'){
            if(ans.size() )ans.pop_back();
            ans += s[i];
            c = '?';
            i++;
        }else{
            ans += s[i];
            i++;
        }
        
        fun(ans,s,i,f,c);
    }
    string rremove(string s){
        // code here
        string ans;
        bool f = true;
        while(f){
            f = false;
            int i = 0;
            char c = '?';
            fun(ans,s,i,f,c);
            s = ans;
            // cout<<ans<<" ";
            ans.clear();
        }
        return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends
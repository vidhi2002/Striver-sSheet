// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            if(s.length()>19)
                return 0;
            if(s[s.length()-1]=='.')
                return 0;
            vector<string> v;
            stringstream data(s);
            string str="";
            while(data){
                getline(data,str,'.');
                v.push_back(str);
            }
            int check=0;
            if(v.size()>5)
                return 0;
            if(v.size()<4)
                return 0;
            for(int i=0;i<v.size()-1;i++)
            {
                if(v[i].length()==0)
                    return 0;
                else if(v[i].length()>3)
                    return 0;
                else if(v[i].length()==1)
                {
                    if(isalpha(v[i][0]))
                        return 0;
                    else if(stoi(v[i])>=0 && stoi(v[i])<=9)
                        check++;
                }
                else if(v[i].length()==2 || v[i].length()==3)
                {
                    if(isalpha(v[i][0]) || isalpha(v[i][1]))
                        return 0;
                    else if(v[i].length()==3 && isalpha(v[i][2]))
                        return 0;
                    else if(v[i][0]=='0')
                        return 0;
                    else if(stoi(v[i])>=0 && stoi(v[i])<=255)
                        check++;
                    else
                        return 0;
                }
                
            }
            if(check==4)
                return 1;
            return 0;
        }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends
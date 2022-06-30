// { Driver Code Starts




#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
	public:
	    bool isPalindrome(string s,int n){
        int i=0,j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
 vector<string> all_plaindromes(string s)
 {
  int n=s.length();
  vector<string> ans;
  string temp=s;
//    sort(s.begin(),s.end());
  do{
      if(isPalindrome(s,n)){
          ans.push_back(s);
      }
      next_permutation(s.begin(),s.end());
      
  }while(temp!=s);
  sort(ans.begin(),ans.end());
  return ans;
 }
};



// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s;
    	cin >> s;
        Solution ob;
    	vector<string> ans  = ob.all_plaindromes(s);
    	cout<<"{ ";
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"}";
    	cout<<"\n";
    }
	return 0;
}

  // } Driver Code Ends
class Solution {
public:
    int countBinarySubstrings(string s) {

    int n=s.size();
    
    int ans=0;
    
    int prev=0;
    int curnt=1;
    int i=1;
    
    while(i<n)
    {
        if(s[i-1]!=s[i])
        {
            ans+=min(prev,curnt);
            
            prev=curnt;
            curnt=1;
        }
        
        else
           curnt++;
        
       i++;
    }
    
    ans=ans+min(prev,curnt);  // this is do for the last element of string.
    
    return ans;
    
}
};
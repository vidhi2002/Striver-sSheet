class Solution {
public:

    int myAtoi(string s) {
        long long ans=0;
        int sign=-1,k=0,p=0,check=0;
        for(p=0;p<s.length();p++)
        {
            if(s[p]!=' ')
                break;
        }
        
        for(int i=p;i<s.length();i++)
        {
            if(sign==-1 && s[i]=='+' && check==0){
                sign=0;
                check=1;
            }
            else if(sign==-1 && s[i]=='-'&& check==0){
                sign=1;
                check=1;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                check=2;
                char c=s[i];
                int r=c-48;
                if(ans==0 && r==0)
                    ans=0;
                else{
                    ans=ans*10+r;
                    k++;
                }
                if(sign==1 && -ans<=INT_MIN){
                    ans=INT_MIN;
                    return ans;
                }
                if(ans>INT_MAX)
                {
                    ans=INT_MAX;
                    return ans;
                }
            }
            else if(isdigit(s[i])==0)
                break;
        }
        if(sign==1)
            ans=-ans;
        return ans;
    }
};
bool cmp(char& a,char& b)
{
    return a>b;
}
class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0)
            return 0;
        if(num<0)
        {
            num=abs(num);
            string t=to_string(num);
            sort(t.begin(),t.end(),cmp);
            num=stoll(t,nullptr,10);
            num=0-num;
            return num;
        }
        string s=to_string(num);
        sort(s.begin(),s.end());
        //cout<<s<<endl;
        if(s[0]!='0')
            return stoll(s,nullptr,10);
        int i=0;
        while(i<s.length() && s[i]=='0'){
            //cout<<"in"<<" ";
            i++;
        }
        //cout<<i<<endl;
        swap(s[0],s[i]);
        return stoll(s,nullptr,10);
    }
};
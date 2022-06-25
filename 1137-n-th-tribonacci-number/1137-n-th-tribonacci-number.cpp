class Solution {
public:
    int tribonacci(int n) {
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        int p1=0,p2=1,p3=1;
        for(int i=3;i<=n;i++)
        {
            int cur=p1+p2+p3;
            p1=p2;
            p2=p3;
            p3=cur;
        }
        return p3;
    }
};
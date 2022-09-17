vector<int> t(31,-1);
class Solution {
    
public:
    
    int find(int n)
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(t[n]!=-1)
            return t[n];
        return t[n]=find(n-1)+find(n-2);
    }
    int fib(int n) {
        return find(n);
    }
};
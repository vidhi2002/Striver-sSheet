class Solution {
public:
    int minPartitions(string n) {
        char c='0';
        for(int i=0;i<n.length();i++)
        {
            if(n[i]>c)
                c=n[i];
        }
        return c-'0';
    }
};
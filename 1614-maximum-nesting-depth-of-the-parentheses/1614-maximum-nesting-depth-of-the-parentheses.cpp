class Solution {
public:
    int maxDepth(string s) {
        
        int cnt = 0, res = 0;
        
        for(char ch:s)
            if (ch == '(')
            {
                cnt++;
                res = max(res, cnt);
            }
            else if (ch == ')')
                cnt--;
        
        return res;
    }
};
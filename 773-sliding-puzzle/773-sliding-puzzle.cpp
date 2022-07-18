class Solution {
public:
    string swapW(string s,int i,int j)
{
    char c=s[i],d=s[j];
    s[i]=d;
    s[j]=c;
    return s;
}
    int slidingPuzzle(vector<vector<int>>& board) {
        string comp="123450",s="";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
                s=s+to_string(board[i][j]);
        }
        if(comp==s)
            return 0;
        vector<vector<int>> moves{{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}};
        unordered_map<string,int> vis;
        vis[s]++;
        queue<string> q;
        q.push(s);
        int level=0;
        while(!q.empty())
        {
            int size=q.size();
            while(size>0)
            {
                string rem=q.front();
                q.pop();
                if(rem==comp)
                    return level;
                int j;
                for(j=0;j<6;j++)
                {
                    if(rem[j]=='0')
                        break;
                }
                for(int i=0;i<moves[j].size();i++)
                {
                    string t=swapW(rem,moves[j][i],j);
                    if(vis.find(t)!=vis.end())
                        continue;
                    q.push(t);
                    vis[t]++;
                }
                size--;
            }
            level++;
        }
        return -1;
    }
};
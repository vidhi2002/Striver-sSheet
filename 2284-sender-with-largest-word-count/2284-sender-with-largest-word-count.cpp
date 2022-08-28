struct P{
    public: 
    string s;
    int n;
    P(int n,string s)
    {
        this->n=n;
        this->s=s;
    }
};
struct H {
    bool operator()(P const& p1, P const& p2)
    {
        if(p1.n==p2.n)
            return p1.s<p2.s;
        return p1.n<p2.n;
    }
};

class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int> mp;
        for(int i=0;i<messages.size();i++)
        {
            stringstream str(messages[i]);
            string word;
            while(str>>word)
                mp[senders[i]]++;
        }
        priority_queue<P, vector<P>, H> q;
        for(auto it: mp)
            q.push(P(it.second,it.first));
        P ans=q.top();
        return ans.s;
            
    }
};
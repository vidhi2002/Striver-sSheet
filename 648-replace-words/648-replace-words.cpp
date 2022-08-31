class trie{
    public:
        trie* child[26];
        bool isEnd;
            trie(){
                memset(child,0,sizeof(child));
                isEnd=0;
            }
};
class Solution {
public:
    trie* root=new trie();
    void insert(string &s){
        trie* cur=root;
        for(auto &ch:s){
            if(!cur->child[ch-'a']) cur->child[ch-'a']=new trie();
            cur=cur->child[ch-'a'];
        }
        cur->isEnd=1;
    }
    string solve(string &s){
        trie* cur=root;
        for(int i=0;i<size(s);i++){
            if(cur->isEnd) return s.substr(0,i);
            if(!cur->child[s[i]-'a']) return s;
            cur=cur->child[s[i]-'a'];
        }
        return s;
    }
    string replaceWords(vector<string>& dict, string sentence) {
        for(auto &x:dict) insert(x);
        stringstream ss(sentence);
        string s,res;
        while(getline(ss,s,' ')) res+=solve(s)+' ';
        res.pop_back();
        return res;
    }
};
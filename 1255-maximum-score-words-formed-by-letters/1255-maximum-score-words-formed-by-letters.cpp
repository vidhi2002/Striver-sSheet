class Solution {
public:
int sol(vector<string>& words, map<char,int> mp, vector<int>& score,int i)
    {
        if(i==words.size())
            return 0;
        int sno=sol(words,mp,score,i+1);
        int sword=0;
        string word=words[i];
        bool flag=true;
        for(int j=0;j<word.length();j++)
        {
            //char ch=word[j];
            if(mp.find(word[j])==mp.end() || mp[word[j]]==0){
                flag=false;
            }
            mp[word[j]]--;
            sword+=score[word[j]-'a'];
        }
        int syes=0;
        if(flag)
            syes=sword+sol(words,mp,score,i+1);
        
        return max(sno,syes);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        map<char,int> mp;
        for(int i=0;i<letters.size();i++)
            mp[letters[i]]++;
        return sol(words,mp,score,0);
    }
};
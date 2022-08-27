class Vaibhav
{
      public:
      string word;
      int freq;
      Vaibhav(string word,int freq)
      {
          this->word=word;
          this->freq=freq;
      }
};
class Mycompare
{
    public:
    bool operator ()(Vaibhav item1,Vaibhav item2)
    {
        if(item1.freq!=item2.freq)
        {
            return item1.freq<item2.freq;
        }
        else
        {
            return item1.word>item2.word;
        }
    }
};

class Solution {
    public:
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        map<string,int>mymap;
        for(auto word:words)
            mymap[word]++;
        priority_queue<Vaibhav,vector<Vaibhav>,Mycompare>highF;
        for(auto each:mymap)
        {
            string word=each.first;
            int freq=each.second;
            Vaibhav mypair(word,freq);
            highF.push(mypair);
        }
        vector<string>ans;
        while(k--)
        {
            Vaibhav topMost=highF.top();
            highF.pop();
            ans.push_back(topMost.word);
        }
        return ans;
    }
};
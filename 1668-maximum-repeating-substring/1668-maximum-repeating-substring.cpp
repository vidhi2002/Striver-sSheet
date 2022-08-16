class Solution {
public:
    int maxRepeating(string seq, string word) {
        int sPos = 0;
        int ans = 0;
        while(1) {
            int idx = seq.find(word, sPos);
            if (idx == -1)  return ans;
            
            // cout << idx << "\n";
            int j=idx, cnt=0;
            while (seq.substr(j, word.size()) == word)
            {
                cnt ++;
                j += word.size();
            }
            // cout << "\t" << cnt << "\n";
            
            ans = max(ans, cnt);
            sPos++;
        }
    }
};
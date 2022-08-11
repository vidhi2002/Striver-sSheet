class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        long long alice=0,bob=0;
        int i=0,j=piles.size()-1,check=0;
        while(i<j)
        {
            if(check==0)
            {
                if(piles[i]>piles[j])
                {
                    alice+=piles[i];
                    i++;
                }
                else
                {
                    alice+=piles[j];
                    j--;
                }
                check=1;
            }
            else
            {
                if(piles[i]>piles[j])
                {
                    bob+=piles[j];
                    j--;
                }
                else
                {
                    bob+=piles[i];
                    i++;
                }
                check=0;
            }
        }
        if(alice>bob)
            return true;
        return false;
    }
};
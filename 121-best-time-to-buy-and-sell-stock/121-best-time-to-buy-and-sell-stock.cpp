class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>::iterator ptr;
        long long int max_profit=0,min=prices.front(),profit;
        for (ptr = prices.begin()+1; ptr < prices.end(); ptr++)
        {
            if(*ptr<min)
            {
                min=*ptr;
                profit= (*ptr-min);
                if(profit>max_profit)
                    max_profit=profit;
            }
            else
            {
                profit= (*ptr-min);
                if(profit>max_profit)
                    max_profit=profit;
            }
            
        }
        return max_profit;
    }
};
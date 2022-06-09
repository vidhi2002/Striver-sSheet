class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> ans(prices.size(),0);
        for(int i=prices.size()-1;i>=0;i--)
        {
            if(st.empty())
                ans[i]=prices[i];
            else
            {
                while(!st.empty() && st.top()>prices[i])
                    st.pop();
                if(st.empty())
                    ans[i]=prices[i];
                else
                    ans[i]=prices[i]-st.top();
            }
            st.push(prices[i]);
        }
        return ans;
    }
};
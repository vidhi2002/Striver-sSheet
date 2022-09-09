class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=']')
            {
                st.push(s[i]);
            }
            else
            {
                string subst="";
                while(st.top()!='[')
                {
                    subst=st.top() + subst;
                    st.pop();
                }
                st.pop();
                string k="";
                while(!st.empty() && isdigit(st.top()))
                {
                    k= st.top() + k;
                    st.pop();
                }
                int a=stoi(k);
                while(a--)
                {
                    for(int j=0;j<subst.length();j++)
                    {
                        st.push(subst[j]);
                    }
                }
            }
        }
        string ans="";
        while(!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
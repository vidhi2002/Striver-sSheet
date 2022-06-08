class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        long long int count=0;
        if((s.size()%2)!=0)
        {
            return false;
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                {
                    st.push(s[i]);
                }
                else if(st.empty()==0)
                {
                    if(s[i]==')')
                    {
                        if(st.top()=='(')
                        {
                            st.pop();
                            count++;
                        }
                        else
                        {
                            return false;
                            break;
                        }
                    }
                    else if(s[i]=='}')
                    {
                        if(st.top()=='{')
                        {
                            st.pop();
                            count++;
                        }
                        else
                        {
                            return false;
                            break;
                        }
                    }
                    else
                    {
                        if(st.top()=='[')
                        {
                            count++;
                            st.pop();
                        }
                        else
                        {   
                            return false;
                            break;
                        }
                    }
                }
            }
            if(st.empty()!=0 && count==s.size()/2)
                return true;
            else
                return false;
        }
    }
};
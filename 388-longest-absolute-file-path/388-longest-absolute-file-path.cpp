class Solution {
    
public:
    int lengthLongestPath(string s) {
        stack<pair<int,int>> st;
        int pos = 0, len = 0, maxlen = 0, cnt = 0, isfile = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='\n'){
                while(!st.empty() && st.top().second >= pos){
                    len -= st.top().first;
                    st.pop();
                }
                len += cnt;
                if(isfile){
                    maxlen = max(maxlen, len+pos);
                }
                st.push({cnt, pos});
                cnt = 0;
                pos = 0;
                continue;
            }else if(s[i]=='\t'){
                pos = 0;
                isfile = 0;
                do{
                    if(s[i]=='\t'){
                    if(!pos)
                        pos = 1;
                    else
                        pos++;
                    }else{
                        cnt++;
                        if(s[i] == '.')
                            isfile = 1;
                    }
                    i++;
                }while(i<s.length() && s[i]!='\n');
                if(s[i] == '\n')
                    i--;
            }else{
                if(!cnt)
                    cnt=1;
                else
                    cnt++;
                if(s[i] == '.')
                    isfile = 1;
                /// cout<<cnt<<endl;
            }
        }
        if(isfile){
            while(!st.empty() && st.top().second >= pos){
                len -= st.top().first;
                st.pop();
            }
            len += cnt;
            maxlen = max(maxlen, len+pos);
        }
        return maxlen;
    }
};
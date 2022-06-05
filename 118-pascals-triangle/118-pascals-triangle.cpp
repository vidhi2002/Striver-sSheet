class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> result;
        vector<int> a;
        int r=n,s=0;
        if(r>=2)
        {
            a.push_back(1);
            result.push_back(a);
            a.clear();
            s++;r--;
            a.push_back(1);
            a.push_back(1);
            result.push_back(a);
            a.clear();
            s++;r--;
            if(r!=0)
            {   
                while(r!=0){
                    while(s<n){
                        a.push_back(1);
                        int l=0,u=l+1;
                        while(u<result[s-1].size())
                        {
                            a.push_back(result[s-1][l]+result[s-1][u]);
                            l++;u++;
                        }
                        a.push_back(1);
                        result.push_back(a);
                        //for(int i=0;i<result[])
                        a.clear();
                        s++;
                    }
                    r--;
                }
            }
        }
        else{
            a.push_back(1);
            result.push_back(a);
            a.clear();
            
        }
    return result;
    }
};
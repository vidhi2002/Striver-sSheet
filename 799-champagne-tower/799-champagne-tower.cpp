class Solution {
public:
    double champagneTower(int K, int R, int C) {
        vector<vector<double>> v;
        vector<double> h;
        for(int i=0;i<=R;i++)
        {
            h.push_back((double)0);
            v.push_back(h);
        }
        v[0][0]=(double)K;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j]>1)
                {
                    v[i+1][j]=v[i+1][j]+(double)(v[i][j]-1)/2;
                    v[i+1][j+1]=v[i+1][j+1]+(double)(v[i][j]-1)/2;
                    v[i][j]=(double)1;
                }
            }
        }
        if(v[R][C]>1)
            return (double)1;
        return (double)v[R][C];
        
    }
};
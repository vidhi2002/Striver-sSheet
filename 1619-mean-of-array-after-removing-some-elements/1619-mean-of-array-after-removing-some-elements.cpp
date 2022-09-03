class Solution {
public:
    double trimMean(vector<int>& arr) {
        int rate=(arr.size()*5)/100;
        sort(arr.begin(),arr.end());
        double sum=0;
        for(int i=rate;i<arr.size()-rate;i++)
            sum+=(double)arr[i];
        double mean=(double)sum/(arr.size()-2*rate);
        return mean;
    }
};
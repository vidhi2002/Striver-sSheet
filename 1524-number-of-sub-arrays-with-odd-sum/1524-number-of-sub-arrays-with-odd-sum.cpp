class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long int count=0;
        //vector<int> prefix;
        int odd=0,even=0;
        long long int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2==0)
            {
                count+=odd;
                even++;
            }
            else
            {
                count+=even+1;
                odd++;
            }
        }
        return count%1000000007;
        
    }
};
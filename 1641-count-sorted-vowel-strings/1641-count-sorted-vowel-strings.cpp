class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>arr(5,1);
        while(n>0){
            for(int i=3;i>=0;i--)arr[i]+=arr[i+1];
            n--;
        }
        return arr[0];
    }
};
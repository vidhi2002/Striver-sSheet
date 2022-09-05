class Solution {
public:
    int find(int n, int start){
        if(n==1) return 1;
        if(start == 0){
            return 2*find(n/2,1-start);
        }
        else{
            if(n&1){
                return 2*find(n/2,1-start); 
            }
            return 2*find(n/2,1-start)-1;
        }
    }
    int lastRemaining(int n) {
        return find(n,0);
    }
};
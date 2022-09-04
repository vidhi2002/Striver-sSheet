class Solution {
public:
    int _lastRemaining(int n, int start){
        if(n==1) return 1;
        if(start == 0){//0 means we start from begining
            return 2*_lastRemaining(n/2,1-start);
        }
        else{
            if(n&1){//if last digit is odd, then all odd numbers are deleted
                return 2*_lastRemaining(n/2,1-start); 
            }// all odd numbers are deleted, the make the sequence 1 to n by adding 1 to every element and then dividing by 2.
            return 2*_lastRemaining(n/2,1-start)-1;
        }
    }
    int lastRemaining(int n) {
        return _lastRemaining(n,0);
    }
};
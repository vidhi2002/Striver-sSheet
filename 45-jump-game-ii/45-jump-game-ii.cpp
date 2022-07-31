class Solution {
public:
  int jump(vector<int> &arr){
        int n = arr.size();
        int ladder = 0;
        int steps = 0;
        for(int i = 0 ; i < n ; ){
            if(ladder >= n-1){
                return steps;
            }
            if(ladder < i){
                return -1;
            }
           
            bool increaseSteps = false;
            int k = ladder;
            for( ; i <= k && i < n ; i++){
                if(i + arr[i] > ladder && ladder < n-1){
                    ladder = i + arr[i];
                    increaseSteps = true;
                }   
            }
            if(increaseSteps == true){
                steps += 1;
            }
            
        }
        return steps;
    }
};
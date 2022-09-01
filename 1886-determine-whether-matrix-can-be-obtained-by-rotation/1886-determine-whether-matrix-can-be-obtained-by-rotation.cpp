class Solution {

public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int i=4;
        while(i--){
            matrixrotation(mat);
            if(mat==target){
                return true;
                break;
            }
        }
        return false;
    }
private: void matrixrotation (vector<vector<int>>&a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<i;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<a.size();i++){
        reverse(a[i].begin(),a[i].end());
    }
}

};
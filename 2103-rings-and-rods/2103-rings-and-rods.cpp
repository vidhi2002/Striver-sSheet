class Solution {
public:
    int countPoints(string rings) {
        int count = 0; 
        map<int, set<char>> m;
        for(int i = 0; i < rings.size(); i=i+2){
            m[rings[i+1]].insert(rings[i]);
        }
        for(auto i:m){
            if(i.second.size() == 3) count++;
        }
        return count;
    }
};
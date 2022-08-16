class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        if(plants[0]>capacity)
            return 0;
        int steps=0,j=-1,r=capacity;
        for(int i=0;i<plants.size();i++)
        {
            //cout<<capacity<<" ";
            if(capacity>=plants[i])
            {
                steps+=1;
                capacity-=plants[i];
            }
            else
            {
                steps+=i+i+1;
                capacity=r-plants[i];
            }
        }
        return steps;
    }
};
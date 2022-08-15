class Solution {
public:
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
int N = flowerbed.size();

    if(N == 1 && flowerbed[0] == 0)
        return true;
    
    if(N < n)
     return false;
    
    if(n == 0)
        return true;
    
for(int i=0;i!=N;i++)
 {
     if(flowerbed[i] == 1)
         continue;
     else
     {
         if(i-1>=0 && flowerbed[i-1] == 0 && i+1 < N && flowerbed[i+1] == 0)
         {
          flowerbed[i] = 1;
          n -- ;
         }
         if(i == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0)
         {
             flowerbed[i] = 1;
             n -- ;
         }
         if(i == N-1 && flowerbed[i] == 0 && flowerbed[i-1] == 0)
         {
             flowerbed[i] = 1;
             n -- ;
         }
         // else if(flowerbed[i] == 0 && flowerbed[i+1] == 0 && i+1 < N)
         // {
         //     flowerbed[i] == 1;
         //     n -- ;
         // }
         // else if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && i-1>=0)
         // {
         //     flowerbed[i] = 1;
         //     n -- ;
         // }
     }
    if(n == 0) return true;
 }
    return false;
}
};
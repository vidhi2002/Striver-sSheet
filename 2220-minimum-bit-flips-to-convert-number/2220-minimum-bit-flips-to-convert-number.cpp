class Solution {
public:
    string DecimalToBinary(int num)
{
    string str;
      while(num){
      if(num & 1) // 1
        str+='1';
      else // 0
        str+='0';
      num>>=1; // Right Shift by 1 
    }   
      return str;
}
    int minBitFlips(int start, int goal) {
        string a=DecimalToBinary(start);
        string b=DecimalToBinary(goal);
        if(a.length()>b.length())
            swap(a,b);
        int count=0,i=0;
        while(i<a.length())
        {
            if(a[i]!=b[i])
                count++;
            i++;
        }
        while(i<b.length())
        {
            if(b[i]=='1')
                count++;
            i++;
        }
        return count;
    }
};
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<=2)
            return false;
        vector<int> s=arr;
        sort(s.begin(),s.end());
        if(arr==s)
            return false;
        reverse(s.begin(),s.end());
        if(arr==s)
            return false;
        int check=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(check==0)
            {
                if(i==0 && arr[i]>arr[i+1])
                    return false;
                if(arr[i]==arr[i+1])
                    return false;
                if(arr[i]>arr[i+1])
                    check=1;
            
            }
            else
            {
                if(arr[i]<=arr[i+1])
                    return false;
            }
            if(i==arr.size()-2)
            {
                if(arr[i]>arr[i+1])
                    check=0;
            }
        }
        if(check==0)
            return true;
        return false;
    }
};
class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
        ios_base::sync_with_stdio(0); 
        cin.tie(0); 
        cout.tie(0);
        int maxTime = -1;
        sort(begin(arr), end(arr));
        do{
            int hour = arr[0]*10+arr[1];
            int min = arr[2]*10+arr[3];
            if(hour<24 && min<60){
                int newTime = hour*60+min;
                maxTime = newTime>maxTime? newTime:maxTime;
            }
        } while(next_permutation(begin(arr), end(arr)));
        if(maxTime == -1) return "";
        else{
            ostringstream strstream;
            strstream << setw(2) << setfill('0') << maxTime/60 << ":" << setw(2) << setfill('0') << maxTime%60;
            return strstream.str();
        }
    }
};
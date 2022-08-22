class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int r=coordinates[1]-'0';
        char a=coordinates[0];
        if(r%2==0 && (a=='a' || a=='c' || a=='e' || a=='g'))
            return true;
        else if(r%2==0 && (a=='b' || a=='d' || a=='f' || a=='h'))
            return false;
        else if(r%2!=0 && (a=='a' || a=='c' || a=='e' || a=='g'))
            return false;
        return true;
            
    }
};
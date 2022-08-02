class Solution {
public:
bool isLongPressedName(string name, string typed) {

    std:stringstream ss;
    int index{0};
    char lastch;
    
    for(const auto& x : typed)
    {
        if(x == name[index]) 
        {
            ss << x;
            lastch = x;
            if(index < name.size()) index++;
        }
        else if(x != name[index] && x != lastch) return false;
    }
    
    return ss.str() == name;
}
};
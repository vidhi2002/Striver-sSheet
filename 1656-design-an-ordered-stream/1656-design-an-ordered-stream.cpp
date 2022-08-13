class OrderedStream {
public:
    vector<int> has;
    vector<string> v;
    int loc;
    
    OrderedStream(int n) {
        has=vector<int>(n);
        v=vector<string>(n);
        loc=0;
    }
    
    vector<string> insert(int idKey, string value) {
        --idKey;
        has[idKey]=1;
        v[idKey]=value;
        vector<string> r;
        while(loc<has.size() && has[loc])
        {
            r.push_back(v[loc++]);
            
        }
        return r;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
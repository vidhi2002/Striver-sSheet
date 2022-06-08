class MyStack {
public:
    //using 1 queue
    //just push front element of queue in back
    //and then pop that element
    //then it will follow stack order.
    queue<int> q1;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        for(int i=0;i<q1.size()-1;i++){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        if(q1.empty())return -1;
        int x = q1.front();
        q1.pop();
        return x;
        
    }
    
    int top() {
        if(q1.empty())return -1;
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
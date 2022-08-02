class MinStack {
public:
    MinStack() {
        
    }

    
    stack<int> s,st;
    
    
    void push(int val) {
    if(s.empty()) {
        s.push(val);
        st.push(val);
    }  
        
        else{
            s.push(val);
            st.push(min(st.top(),val));
        }
    }
    
    void pop() {
        
        st.pop();
        
        
        s.pop();
        
        
    }
    
    int top() {
        
        return s.top();
        
    }
    
    int getMin() {
        return st.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
class MinStack {
public:
    stack<int>stk;
    stack<int>minStk;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(minStk.empty() || val<=minStk.top()){
            minStk.push(val);
        }
    }
    
    void pop() {
        int top = stk.top();
        stk.pop();
        if(top==minStk.top()){
            minStk.pop();
        }
    }
    
    int top() {
        return stk.top();    
    }
    
    int getMin() {
        return minStk.top();
    }
};
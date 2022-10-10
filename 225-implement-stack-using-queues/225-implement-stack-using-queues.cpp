class MyStack {
public:  queue<int> q;
    MyStack() {
      
    }
    
    void push(int x) {
        q.push(x);
        int size = q.size();
        for(int i=1;i<size;i++)
        {
            q.push(q.front());
            q.pop();
        }
        
    }
    
    int pop() {
        int ans = q.front();
        q.pop();
        return ans;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.size()==0;
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
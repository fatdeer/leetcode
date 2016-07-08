class MinStack {
private:
    stack<int> stk;
    stack<int> min;
    int minimum = 0;
public:
    void push(int x) {
        stk.push(x);
        if (stk.size() == 1)
        {
            minimum = x;
            min.push(x);
        }
            
        else
        {
            if (x <= minimum)
            {
                minimum = x;
                min.push(x);
            }
        }
    }
    void pop() {
        if (stk.top() == minimum)
        {
            min.pop();
            stk.pop();
            if (!min.empty())
                minimum = min.top();
        }
        else
        {
            stk.pop();
        }
    }
    int top() {
        return stk.top();
    }
    int getMin() {
        return minimum;
    }
};
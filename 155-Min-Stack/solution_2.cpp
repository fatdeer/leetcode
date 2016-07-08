class MinStack {
private:
    stack<int> valueStack;
    stack<int> minStack;
    int minimum = 0;
public:
    void push(int);
    void pop();
    int top();
    int getMin();
};

void MinStack::push(int x) {
    if (minStack.empty() || minStack.top() >= x) {
        minStack.push(x);
    }
    
    valueStack.push(x);
}

void MinStack::pop() {
    int value = valueStack.top();
    valueStack.pop();
    
    if (value == minStack.top()) {
        minStack.pop();
    }
}

int MinStack::top() {
    return valueStack.top();
}

int MinStack::getMin() {
    return minStack.top();
}
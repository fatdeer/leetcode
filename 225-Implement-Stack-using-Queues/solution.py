class Queue:
    def __init__(self):
        self.data = collections.deque()
        
    def push(self, x):
        self.data.append(x)
    
    def peek(self):
        return self.data[0]
    
    def pop(self):
        return self.data.popleft()
    
    def size(self):
        return len(self.data)
    
    def empty(self):
        return len(self.data) == 0

class Stack(object):
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.q = Queue()
        

    def push(self, x):
        """
        :type x: int
        :rtype: nothing
        """
        self.q.push(x)
        
        for _ in range(self.q.size() - 1):
            self.q.push(self.q.peek())
            self.q.pop()
    

    def pop(self):
        """
        :rtype: nothing
        """
        self.q.pop()
        
        
    def top(self):
        """
        :rtype: int
        """
        return self.q.peek()
        

    def empty(self):
        """
        :rtype: bool
        """
        return self.q.empty()
        
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
            self.q.push(self.q.front())
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
        return self.q.front()
        

    def empty(self):
        """
        :rtype: bool
        """
        return self.q.empty()
        
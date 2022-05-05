class MyStack:
    def __init__(self):
        self.myStack=[]
        
    def push(self, x: int) -> None:
        self.myStack.append(x)
        
    def pop(self) -> int:
        peek=self.myStack[-1]
        self.myStack=self.myStack[:-1]
        return peek
    
    def top(self) -> int:
        return self.myStack[-1]
    
    def empty(self) -> bool:
        if len(self.myStack)==0:
            return True
        else:
            return False 


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()
class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        def back(x):
            stack=[]
            arr=list(x)
            for i in range(len(arr)):
                if len(stack)==0 and arr[i]=="#":
                    continue
                elif len(stack)!=0 and arr[i]=="#":
                    stack.pop()
                else:
                    stack.append(arr[i])
            return " ".join(stack)
        
        x=back(s)
        y=back(t)
        return x==y
        
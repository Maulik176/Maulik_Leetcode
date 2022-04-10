class Solution:
    def calPoints(self, ops: List[str]) -> int:
        add = []
        for i in ops:
            if i == "+":
                add.append(add[-2] + add[-1]) #adding previous two values
            elif i == "C":
                add.pop() #invalidate the last record 
            elif i == "D":
                add.append(2*add[-1])
            else:
                add.append(int(i))
        return sum(add)
    
            
        
                #res.append(res[len(res)-2] + res[-1])             
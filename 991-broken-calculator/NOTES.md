class Solution:
def brokenCalc(self, startValue: int, target: int) -> int:
if target <= startValue:
return startValue - target
else:
steps = 0
while target > startValue:
if target % 2 != 0:
target += 1
else:
target = target//2
steps += 1
steps += (startValue - target)
return steps
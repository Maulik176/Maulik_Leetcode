class Solution:
    def brokenCalc(self, startValue: int, target: int) -> int:
        if target <= startValue:
            return startValue - target
        else:
            ops = 0
            while target > startValue:
                if target % 2 != 0:
                    target += 1
                else:
                    target = target//2
                ops += 1
            ops += (startValue - target)
            return ops
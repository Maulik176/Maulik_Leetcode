class Solution:
    def mySqrt(self, x: int) -> int:
        if x==0:
            return 0
        start, end = 1,x
        while start<end:
            mid = (start+end+1)//2
            quo = x//mid
            if quo<mid:
                end = mid-1
            elif quo>= mid:
                start = mid
        return start

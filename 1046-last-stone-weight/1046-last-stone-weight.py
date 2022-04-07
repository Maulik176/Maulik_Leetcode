class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        stones.sort()
        while stones:
            x = stones.pop()
            if not stones:
                return x
            y = stones.pop()
            if x>y:
                insort(stones, x-y)
        return 0
    
        
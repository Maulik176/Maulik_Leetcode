class Solution:
    def hammingWeight(self, n: int) -> int:
        return sum((n & (1<<i))!=0 for i in range(32))
        
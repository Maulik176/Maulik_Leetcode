class Solution:
    def climbStairs(self, n: int) -> int:
        return int((((1 + sqrt(5)) / 2)**(n + 1) - ((1 - sqrt(5)) / 2)**(n + 1)) / sqrt(5))
        
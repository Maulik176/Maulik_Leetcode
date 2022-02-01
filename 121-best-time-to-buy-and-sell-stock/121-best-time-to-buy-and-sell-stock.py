class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        low, sell = float("inf"), 0
        for i in prices:
            profit = i - low
            sell = max(profit, sell)
            low = min(i, low)
        return sell
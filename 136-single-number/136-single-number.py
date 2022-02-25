class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        one_appear = 0
        for i in nums:
            one_appear ^= i
        return one_appear
        
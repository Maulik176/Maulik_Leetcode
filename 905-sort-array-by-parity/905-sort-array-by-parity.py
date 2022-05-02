class Solution(object):
    def sortArrayByParity(self, nums):
        return ([i for i in nums if i % 2 == 0] +
                [j for j in nums if j % 2 == 1])
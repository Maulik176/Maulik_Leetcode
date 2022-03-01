class Solution:
    def countBits(self, n: int) -> List[int]:
        ans = []
        for i in range(n+1):
            binary_convert = format(i, 'b')
            ans.append(binary_convert.count('1'))
        return ans
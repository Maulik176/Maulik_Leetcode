class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        temp = Counter(nums).most_common(k)
        ans =[]
        for i in range(k):
            ans.append(temp[i][0])
        return ans
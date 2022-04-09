class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        temp = Counter(nums).most_common(k) #counter keeps a count of the most frequent number .... counter(nums).most_common(k) keeps a counter od the most common element asked for(k)
        ans =[]
        for i in range(k):
            ans.append(temp[i][0])
        return ans
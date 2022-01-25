class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        if len(arr) < 3: return False; #mountain ki size 3 se badi honi chaiye
        l = 0; #ek left pointer oth index pe aur ek right pointer end index pe
        r = len(arr) - 1
        while l + 1 < r and arr[l] < arr[l + 1]:  
            l += 1 #agar left ki value left + 1 ke kam hai aur left se right jaana hai toh....
        while r - 1 > 0 and arr[r] < arr[r - 1]: 
            r -= 1
        return l == r

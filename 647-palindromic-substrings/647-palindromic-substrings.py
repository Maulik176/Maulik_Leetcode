class Solution:    
    def expandAndCountPallindromes(self, i, j, s):
        length=len(s)
        cnt=0
        while i>=0 and j<length and s[i]==s[j]:
            i-=1
            j+=1
            cnt+=1
        return cnt
        
    def countSubstrings(self, s: str) -> int:
        return sum(self.expandAndCountPallindromes(i,i,s) + self.expandAndCountPallindromes(i,i+1,s) for i in range(len(s)))
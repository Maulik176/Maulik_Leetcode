class Solution(object):
    def wordPattern(self, pattern, s):
        dic = defaultdict()  
        words = s.split(' ')
		
        if len(pattern) != len(words) or len(set(pattern)) != len(set(words)): 
            return False
        for i, c in enumerate(pattern):
            if c in dic:  #c points to some word
                if dic[c] != words[i]:
                    return False 
            else:
                dic[c] = words[i]
        return True
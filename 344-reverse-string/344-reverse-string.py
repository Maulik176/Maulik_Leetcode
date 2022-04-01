class Solution(object):
    def reverseString(self, s):
        i = 0 #first index
        j = len(s)-1 #last index
        while i<j: #traversing the array
            temp = s[i] #swap first and last values
            s[i] = s[j]
            s[j] = temp
            i +=1 #increase i
            j -= 1 #decrease j
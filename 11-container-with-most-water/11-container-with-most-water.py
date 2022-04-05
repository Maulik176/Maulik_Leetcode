class Solution(object):
    def maxArea(self, height):
        i = 0 #first index in array
        j = len(height)-1  #last index in array
        water_amount = 0 
        while i<j:
            store = max(water_amount,  (j-i)*min(height[i],height[j]))
            #here j-i represents hte width and min(i,j) is the hieght 
            water_amount = max(water_amount,store)
            if(height[i] < height[j]):
                i +=1
            else:
                j -=1
        return water_amount           
             
        
            
        """
        :type height: List[int]
        :rtype: int
        """
        
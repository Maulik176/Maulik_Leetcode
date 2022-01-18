class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count=0 #variable to see that if we can plant the plant
        prev=0 # variable to see what was at the prev spot
        for cur in flowerbed:
            if cur == 1:
                if prev == 1: #cant plant
                    count -= 1
                prev = 1
            else:
                if prev == 1: #cant plant
                    prev = 0 
                else:
                    count += 1
                    prev = 1 #0,0 -> can plant so count increase
        return count >= n
        
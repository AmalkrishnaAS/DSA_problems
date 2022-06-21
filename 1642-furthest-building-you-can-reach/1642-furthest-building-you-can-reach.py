class Solution:
    def furthestBuilding(self, heights: List[int], bricks: int, ladders: int) -> int:
        
        n=len(heights)
        
        heap=[]
        
        for i in range(n-1):    #iterate until i+1 goes over the limit
            h=heights[i+1]-heights[i]   #calculate gap
            if h<=0:                     #if no positive height gradient skip
                continue
            heappush(heap,h)                #push the gap
            
            if len(heap)>ladders:           #if not enough ladders extract the minimum gap
                min_h=heappop(heap)
                bricks-=min_h               #replace the ladder with bricks
                if bricks<0:                #if not enough bricks terminate and return
                    return i
        return n-1                          #else we can reach the last building
        
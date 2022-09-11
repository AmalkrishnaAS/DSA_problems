class Solution:
    def maxPerformance(self, n: int, speed: List[int], efficiency: List[int], k: int) -> int:
        
        eng=[]
        
        for eff,spd in zip(efficiency,speed):
            eng.append([eff,spd])
        eng.sort(reverse=True)
        heap=[]
        res,s=0,0
        for eff,spd in eng:
            
            if len(heap)>=k:
                s-=heapq.heappop(heap)
            s+=spd
            heapq.heappush(heap,spd)
            res=max(res,eff*s)
        return res % (10**9+7)
            
        
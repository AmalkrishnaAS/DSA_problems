class Solution(object):
    def successfulPairs(self, spells, potions, success):
       
       
        m=len(potions)
        res=[]
      
        
        potions.sort()
        for s in spells:
            l=0
            r=m-1
            ans=m
            
            while l<=r:
                mid=(l+r)//2
                
                if s*potions[mid]>=success:
                    ans=mid
                    r=mid-1
                else:
                    l=mid+1
            res.append(m-ans)
                    
            
            
        
                    
        return res
        
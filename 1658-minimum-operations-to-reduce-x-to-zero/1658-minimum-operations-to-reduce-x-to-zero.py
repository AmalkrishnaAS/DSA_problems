class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        
        s=sum(nums)
        if s<x:
            return -1
        n=len(nums)
        target=s-x
        s=0
        
        l=0
        ans=-1
        for i in range(len(nums)):
            s+=nums[i]
            
            
            while s>target:
                s-=nums[l]
                l+=1
            if s==target:
                ans=max(ans,i-l+1)
                
        return n-ans if ans!=-1 else -1
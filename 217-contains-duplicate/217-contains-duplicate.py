class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        
        nums.sort()
        
        
        i,j=0,1
        while j<len(nums):
            if nums[i]==nums[j]:
                return True
            i+=1
            j+=1
        return False
        
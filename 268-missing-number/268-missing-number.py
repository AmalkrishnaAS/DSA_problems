class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        
        total=sum(nums)
        n=len(nums)
        supposed=n*(n+1)*0.5
        return int(supposed-total)
        
class Solution:
    def rob(self, nums: List[int]) -> int:
        
        memo=dict()
        
        def dfs(i):
            
            if i in memo:
                return memo[i]
            if i>=len(nums):
                memo[i]=0
                return 0
            
            elif len(nums)==1:
                memo[i]=nums[0]
                return nums[0]
            
            else:
                memo[i]= max(nums[i]+dfs(i+2),dfs(i+1))
                return memo[i]
        
        return dfs(0)
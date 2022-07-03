class Solution:
    def wiggleMaxLength(self, nums: List[int]) -> int:
        ans=2
        dp=[nums[i]-nums[i-1] for i in range(1,len(nums)) if nums[i]!=nums[i-1]]
        if not dp:
            return 1
        for i in range(1,len(dp)):
            if dp[i]*dp[i-1]<0:
                ans+=1
                
        return ans
        
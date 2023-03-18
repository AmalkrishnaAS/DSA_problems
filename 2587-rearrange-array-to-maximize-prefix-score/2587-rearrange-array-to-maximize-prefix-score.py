class Solution:
    def maxScore(self, nums: List[int]) -> int:
        nums.sort(reverse=True)
        print(nums)
        sum=0
        ans=0
        for n in nums:
            sum+=n
            if sum>0:
                ans+=1
        return ans
                
        
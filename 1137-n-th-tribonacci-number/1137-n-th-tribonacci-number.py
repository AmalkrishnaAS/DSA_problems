class Solution:
    def tribonacci(self, n: int) -> int:
        
        memo={}
        
        
        def dfs(n):
            if n in memo:
                return memo[n]
            if n==0:
                return 0
            if n<=2:
                return 1
            memo[n]=dfs(n-1)+dfs(n-2)+dfs(n-3)
            return memo[n]
        return dfs(n)
        
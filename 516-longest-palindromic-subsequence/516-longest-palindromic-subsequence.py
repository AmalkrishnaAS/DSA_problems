class Solution:
    def longestPalindromeSubseq(self, s: str) -> int:
        
        memo=dict()
        
        def dfs(i,j):
            
            if (i,j) in memo:
                return memo[(i,j)]
            
            if i==j:
                memo[(i,j)]= 1
                return 1
            if i>j:
                memo[(i,j)]=0
                return 0
            elif s[i]==s[j]:
                memo[(i,j)]= 2+dfs(i+1,j-1)
                return memo[(i,j)]
            else:
                memo[(i,j)]= max(dfs(i+1,j),dfs(i,j-1))
                return memo[(i,j)]
            
        return dfs(0,len(s)-1)
        
class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        
        
        memo=dict()
        def dfs(i,j):
            
            if (i,j) in memo:
                return memo[(i,j)]
            
            if i==len(text1) or j==len(text2):
                memo[(i,j)]= 0
                return memo[(i,j)]
            elif text1[i]==text2[j]:
                memo[(i,j)]= 1+dfs(i+1,j+1)
                return memo[(i,j)]
                
            else:
                memo[(i,j)]= max(dfs(i+1,j),dfs(i,j+1))
                return memo[(i,j)]
            
            
        return dfs(0,0)    
        
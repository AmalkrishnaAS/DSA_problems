class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        
        memo=dict()
        
        
        
        
        
        
        def dfs(i,j):
            if i==len(word1) or j==len(word2):
                memo[(i,j)]=0
                return 0
            elif (i,j) in memo:
                return memo[(i,j)]
            elif word1[i]==word2[j]:
                memo[(i,j)]= 1+dfs(i+1,j+1)
                return memo[(i,j)]
            else:
                memo[(i,j)]= max(dfs(i+1,j),dfs(i,j+1))
                return memo[(i,j)]
        
        ans=dfs(0,0)
        
        
        return (len(word1)+len(word2))-2*ans
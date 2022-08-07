class Solution:
    def minInsertions(self, s: str) -> int:
        
        
        memo={}
        
        t=s[::-1]
        m=len(s)
        n=len(t)
        
        def lcs(s,t,i,j):
            if i==m or j==n:
                memo[(i,j)]=0
                return 0
            if (i,j) in memo:
                return memo[(i,j)]
            if s[i]==t[j]:
                memo[(i,j)]= 1+lcs(s,t,i+1,j+1)
                return memo[(i,j)]
            else:
                memo[(i,j)]=max(lcs(s,t,i+1,j),lcs(s,t,i,j+1))
                return memo[(i,j)]
        
        return len(s)-lcs(s,t,0,0)    
        
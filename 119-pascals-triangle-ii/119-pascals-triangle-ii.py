class Solution:
    memo=dict()
    def factorial(n):
        if n<=1:
            return 1
        if n in memo:
            return memo[n]
        memo[n]=factorial(n-1) *n
        return memo[n]
    
    def comb(n,r):
        nfact=factorial(n)
        nrfact=factorial(n-r)
        rfact=factorial(r)
        
        return nfact/(rfact*nrfact)
    def getRow(self, n: int) -> List[List[int]]:
        
        row=[]
        for i in range(n+1):
            row.append(comb(n,i))
            
        return row
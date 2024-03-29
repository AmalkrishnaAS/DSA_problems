class Solution:
    def restoreIpAddresses(self, s: str) -> List[str]:
        
        res=[]
        if len(s)>12:
            return res
        def dfs(i,dots,curr):
            if dots==4 and i==len(s):
                res.append(curr[:-1])
                return
            if dots>4:
                return
            if len(s)==i:
                return
            for j in range(i,min(i+3,len(s))):
                if int(s[i:j+1])<=255 and ((i==j) or s[i]!='0'):
                    dfs(j+1,dots+1,curr+s[i:j+1]+".")
                    
                    
        dfs(0,0,"")
        return res
class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        
        l3=s1.split(" ")+s2.split(" ")
        
        
        print(l3)
        ans=[]
        count={}
        
        for s in l3:
            if s in count:
                count[s]+=1
            else:
                count[s]=1
        
        
        for c in count:
            if count[c]<2:
                ans.append(c)
        return ans
        
        
        
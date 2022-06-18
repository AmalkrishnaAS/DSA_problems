class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        
        if len(s)==2:
            return s[0]==s[1]
        for i in range(len(s)//2+1,0,-1):
            if len(s)%i==0:
                num_repeat=len(s)//i
                t=s[:i]*num_repeat
                print(t,num_repeat)
                if t==s:
                    return True and num_repeat!=1 
                
        return False
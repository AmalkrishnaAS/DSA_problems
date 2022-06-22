#User function Template for python3

class Solution:
    
  
    def countWays(self, n, sum):
        memo=dict()
        def helper(n,sum):
            if n==0:
                return sum==0
            if sum==0:
                return 1
                
            if (n,sum) in memo:
                return memo[(n,sum)]
            
                
            ans=0
            for i in range(10):
                if sum-i>=0:
                    ans+=helper(n-1,sum-i)
            memo[(n,sum)]=ans%1000000007        
            return memo[(n,sum)]
        res=0
       
       
        for i in range(1,10,1):
            if sum-i>=0:
                res+=helper(n-1,sum-i)
                
                
                
        
        return res%1000000007 if res!=0 else -1
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range (t):
        arr = input().split()
        n = int(arr[0])
        Sum = int(arr[1])
        
        ob = Solution()
        print(ob.countWays(n, Sum))
# } Driver Code Ends
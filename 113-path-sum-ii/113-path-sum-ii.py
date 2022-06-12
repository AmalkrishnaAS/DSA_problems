# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def pathSum(self, root, targetSum):
        
        res=[]
        
        def dfs(root,current,total):
            if not root:
                return 
            
            current.append(root.val)
            total+=root.val
            
            if not root.left and not root.right and total==targetSum:
                total=0
                
                res.append(current)
                return
            
           
            
            dfs(root.left,current.copy(),total)
            
            dfs(root.right,current.copy(),total)
            
            
            
            
            
            
        dfs(root,[],0)    
        return res
        
                
            
        
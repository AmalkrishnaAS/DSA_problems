# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findDuplicateSubtrees(self, root: Optional[TreeNode]) -> List[Optional[TreeNode]]:
        table = defaultdict(lambda:0)
        ans = []
        def traverse(root):
            if not root:
                return ' '
            left = traverse(root.left)
            right = traverse(root.right)
            res = left+','+right+','+str(root.val)
            table[res] += 1
            if table[res] == 2:
                ans.append(root)
            return res
        traverse(root)
        return ans
class Solution(object):
    def minCameraCover(self, root):
        self.ans = 0
        covered = set()
        covered.add(None)

        def dfs(node, par = None):
            if node:
                dfs(node.left, node)
                dfs(node.right, node)

                if (par is None and node not in covered or
                        node.left not in covered or node.right not in covered):
                    self.ans += 1
                    covered.add(node)
                    covered.add(node.left)
                    covered.add(node.right)
                    covered.add(par)

        dfs(root)
        return self.ans
class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if not root:
            return 0
        
        
        maxx = 1
        
        
        for child in root.children:
            maxx = max(maxx, 1 + self.maxDepth(child))
        
        
        return maxx
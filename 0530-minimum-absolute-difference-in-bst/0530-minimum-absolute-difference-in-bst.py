class Solution:
    def getMinimumDifference(self, r: Optional[TreeNode]) -> int:
        def f(n):
            if n: yield from chain(f(n.right),[n.val],f(n.left))
        return min(starmap(sub,pairwise(f(r))))
class Solution:
    def minMoves(self, nums: List[int]) -> int:
        M=max(nums)
        return (M*len(nums))-sum(nums)
class Solution:
    def minMoves(self, nums: List[int]) -> int:
        M=max(nums)
        total=0
        for i in range(len(nums)):
            total=total+(M-nums[i])
        
        return total
from collections import defaultdict, Counter
class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        count = Counter(nums)
        left = {}
        right = {}
        
        for i, num in enumerate(nums):
            if num not in left:
                left[num] = i
            right[num] = i

        degree = max(count.values())
        min_len = len(nums)

        for num in count:
            if count[num] == degree:
                min_len = min(min_len, right[num] - left[num] + 1)

        return min_len
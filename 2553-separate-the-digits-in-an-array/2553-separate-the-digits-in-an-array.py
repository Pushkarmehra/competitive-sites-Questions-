class Solution(object):
    def separateDigits(self, nums):
        ans = []
        for num in nums:
            for digit in str(num):
                ans.append(int(digit))

        return ans
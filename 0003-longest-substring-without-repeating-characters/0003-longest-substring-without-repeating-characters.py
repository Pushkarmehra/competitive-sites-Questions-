class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mp = {}

        i = 0
        j = 0
        max_dis = 0

        while i < len(s):

            mp[s[i]] = mp.get(s[i], 0) + 1

            while mp[s[i]] > 1:
                mp[s[j]] -= 1
                j += 1

            max_dis = max(max_dis, i - j + 1)

            i += 1

        return max_dis